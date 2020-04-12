#ifndef APP_BUTTONS_HPP
#define APP_BUTTONS_HPP

#include "event_loop.hpp"
#include "../rmioc/buttons.hpp"

namespace rmioc
{
    class screen;
}

namespace app
{

class buttons
{
public:
    buttons(
        rmioc::buttons& device,
        rmioc::screen& screen_device
    );

    /** Subroutine for processing buttons input. */
    event_loop_status event_loop();

private:
    /** reMarkable buttons device. */
    rmioc::buttons& device;

    /** reMarkable screen device. */
    rmioc::screen& screen_device;

    /** Previous buttons state. */
    rmioc::buttons::buttons_state previous_state;
};

} // namespace app

#endif // APP_TOUCH_HPP
