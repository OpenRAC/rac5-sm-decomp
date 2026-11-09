/* LEVEL_01:0x1C5638 -- calls a helper on a table entry, then optionally a second helper. */

extern char D_00208EC8[];

int func_0809D0(void *a0, void *a1, int a2, int a3, int a4, int a5, int a6, int a7,
                float f12, float f13, float f14, float f15);
void func_028738(void *a0);

void func_1C5638(char *a0)
{
    char *ent;
    char *a1;
    unsigned char *s1;

    ent = D_00208EC8 + (*(unsigned char *)(a0 + 0x46) << 5);
    a1 = *(char **)(ent + 0x18);
    s1 = *(unsigned char **)(a0 + 0x54);
    if (a1 != 0) {
        func_0809D0(a0, a1, 0, 0, 0, 0, 0, 1, *(float *)(a1 + 0x14), *(float *)(a1 + 0x18),
                    *(float *)(a1 + 0x1C), *(float *)(a1 + 0x20));
    }
    a0[0x45] = 1;
    if (s1[0xD] != 0) {
        func_028738(*(void **)(a0 + 0x5C));
    }
}
