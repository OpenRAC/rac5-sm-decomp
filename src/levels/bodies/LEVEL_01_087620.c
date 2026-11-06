void func_087620(unsigned int *flags)
{
    unsigned int original = *flags;
    if (original & 0x10u)
        *flags = (*flags & ~0x10u) | 0x40u;
    if (original & 0x40u)
        *flags = (*flags & ~0x40u) | 0x10u;
    if (original & 0x80u)
        *flags = (*flags & ~0x80u) | 0x20u;
    if (original & 0x20u)
        *flags = (*flags & ~0x20u) | 0x80u;
}
