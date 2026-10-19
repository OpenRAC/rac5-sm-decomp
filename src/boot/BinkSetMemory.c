/* BinkSetMemory — RAD memory-allocator hook.
 *
 * Retail 0x01EA7378 is a wrapper that forwards its two arguments untouched to
 * RADSetMemory (0x01EAB4A8): it sets no argument register, so the a0/a1 of the
 * caller reach the callee. The previous reconstruction declared the function
 * as taking no arguments; that compiled to the same bytes only because the
 * registers are never touched, and it misdescribed the SDK entry point
 * (Bink 1.x: void BinkSetMemory(RADMALLOC *alloc, RADFREE *free)).
 * This version states the real prototype; the linked object must stay
 * identical (object SHA 02cac445...).
 */
typedef void *(*RADMALLOC)(unsigned int bytes);
typedef void (*RADFREE)(void *ptr);

extern void RADSetMemory(RADMALLOC alloc, RADFREE free);

void BinkSetMemory(RADMALLOC alloc, RADFREE free) {
    RADSetMemory(alloc, free);
}
