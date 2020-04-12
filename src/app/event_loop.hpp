#ifndef APP_EVENT_LOOP_HPP
#define APP_EVENT_LOOP_HPP

#include <cstdint>

namespace app
{

/** Informations returned by subroutines of the event loop.  */
struct event_loop_status
{
    /** True if the client must quit the event loop. */
    bool quit;

    /**
     * Timeout to use for the next poll call (in milliseconds).
     *
     * The minimum timeout among all the event loop subroutines will be used.
     * Can be -1 if no more work is needed (wait indefinitely).
     */
    int timeout;
};

/** List of mouse button flags used by the VNC protocol. */
enum class MouseButton : std::uint8_t
{
    Left = 1,
    Right = 1U << 1U,
    Middle = 1U << 2U,
    ScrollDown = 1U << 3U,
    ScrollUp = 1U << 4U,
    ScrollLeft = 1U << 5U,
    ScrollRight = 1U << 6U,
};

} // namespace app

#endif // APP_EVENT_LOOP_HPP
