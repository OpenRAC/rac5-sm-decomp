/* LEVEL_15:0x115C38 -- runs four index loops over local helper functions. */

extern void func_1149D0(int i);
extern void func_115180(int i);
extern void func_115220(int i);
extern void func_115700(int i);

void func_115C38(void) {
    int i;

    for (i = 0; i < 12; i++) {
        func_1149D0(i);
    }
    i = 0;
    do {
        func_115180(i);
        i++;
    } while (i <= 0);
    for (i = 0; i < 3; i++) {
        func_115220(i);
    }
    for (i = 0; i < 7; i++) {
        func_115700(i);
    }
}
