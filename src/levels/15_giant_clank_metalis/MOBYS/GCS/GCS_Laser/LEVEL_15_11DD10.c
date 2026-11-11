/* LEVEL_15:0x11DD10 -- allocates a buffer sized from a count and stores the pointers. */
extern char D_00170A68[];
extern void *func_0D4F30(int a0, unsigned int a1, int a2, void *a3, int a4);
extern void func_07EE10(void *a0, unsigned int a1, int a2);

void func_11DD10(int *o, void *a1)
{
    int s3;
    unsigned int s0;
    void *s1;

    o[0] = (int)a1;
    s3 = *(int *)((char *)a1 + 0x24);
    s0 = (s3 + 1) << 1;
    s1 = func_0D4F30(0x10, s0 * 0x30, 0, D_00170A68, 0x36);
    func_07EE10(s1, s0, s3);
    o[1] = (int)s1;
    o[2] = (int)s0;
}
