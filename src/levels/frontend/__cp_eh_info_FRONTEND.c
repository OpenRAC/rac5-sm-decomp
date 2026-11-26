/* FRONTEND:0x0251F0 -- returns the current exception info pointer. Ported from rac5-sm-decomp src/boot/__cp_eh_info.c (__cp_eh_info). */
extern char **func_0242E8(void);

char *__cp_eh_info(void) {
    return *func_0242E8();
}
