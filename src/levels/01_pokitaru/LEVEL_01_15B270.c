/* LEVEL_01:0x15B270 -- runs the state checks for an object and triggers one event. */
extern int func_07CAB8(void *a0, int a1);
extern int func_07CE40(void *a0);
extern void func_07CB58(void *a0, float f12, int a1);
extern int func_1CDDB8(void *a0, float f12, void *a1);
extern void func_15C260(void *a0, unsigned int a1, int a2);

void func_15B270(char *a0)
{
    char *s1 = *(char **)(a0 + 0x58);

    if (func_07CAB8(a0, 0)) {
        if (func_07CE40(a0) == 3) {
            func_07CB58(a0, 0.0f, 4);
        }
    }
    if (func_1CDDB8(s1 + 0x44, 0.6f, a0)) {
        func_15C260(a0, ((unsigned char *)a0)[0x45], 0x1A);
    }
}
