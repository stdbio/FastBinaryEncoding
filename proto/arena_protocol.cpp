//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: arena.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065) // C4065: switch statement contains 'default' but no 'case' labels
#endif

#include "arena_protocol.h"

namespace FBE {

namespace arena {

bool Receiver::onReceive(size_t type, const void* data, size_t size)
{
    switch (type)
    {
        default: break;
    }

    if (arena_common::Receiver::onReceive(type, data, size))
        return true;

    return false;
}

bool Proxy::onReceive(size_t type, const void* data, size_t size)
{
    switch (type)
    {
        default: break;
    }

    if (arena_common::Proxy::onReceive(type, data, size))
        return true;

    return false;
}

void Client::reset_requests()
{
    arena_common::Client::reset_requests();
}

void Client::watchdog_requests(uint64_t utc)
{
    arena_common::Client::watchdog_requests(utc);

}

} // namespace arena

} // namespace FBE

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
