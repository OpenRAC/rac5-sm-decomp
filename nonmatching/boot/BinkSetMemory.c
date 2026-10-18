/* BinkSetMemory -- RAD wrapper: forwards its arguments to RADSetMemory. */
extern void RADSetMemory();

void BinkSetMemory(void) {
    RADSetMemory();
}
