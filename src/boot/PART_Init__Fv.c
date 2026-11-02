extern char part_initialized; /* 0x01EF0D9C */
extern void func_1E7BD00(void);

void PART_Init__Fv(void) {
    if (part_initialized == 0) {
        func_1E7BD00();
        part_initialized = 1;
    }
}
