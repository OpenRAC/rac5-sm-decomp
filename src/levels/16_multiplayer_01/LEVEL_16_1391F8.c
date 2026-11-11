/* LEVEL_16:0x1391F8 -- runs the state checks for an object and triggers one event. */
extern int func_06FB50(void *a0, int a1);
extern int func_06FDC0(void *a0);
extern void func_06FBD0(void *a0, float f12, int a1);
extern int func_186AB8(void *a0, float f12, void *a1);
extern void func_1394D0(void *a0, unsigned int a1, int a2);

void func_1391F8(char *a0)
{
    char *s1 = *(char **)(a0 + 0x58);

    if (func_06FB50(a0, 0)) {
        if (func_06FDC0(a0) == 3) {
            func_06FBD0(a0, 0.0f, 4);
        }
    }
    if (func_186AB8(s1 + 0x34, 0.6f, a0)) {
        func_1394D0(a0, ((unsigned char *)a0)[0x45], 0x1A);
    }
}
