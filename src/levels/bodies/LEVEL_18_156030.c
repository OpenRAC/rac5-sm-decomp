/* LEVEL_18:0x156030 -- stores a fixed float into a record, calls a helper unless a sentinel is present, then calls a second helper. */

extern void func_11CAE8(int a0, int a1, int a2);
extern void func_156620(char *a0, int a1);

void func_156030(char *a0)
{
    char *v1;
    char *a1p;
    int val;

    v1 = *(char **)(a0 + 0x58);
    a1p = *(char **)(a0 + 0x54);
    val = *(int *)(v1 + 0x24);
    *(float *)(v1 + 0x20) = 9.0f;
    if (val != 0xBAADB33F) {
        func_11CAE8(val, (unsigned char)a1p[4], 0);
    }
    func_156620(a0, 0);
}
