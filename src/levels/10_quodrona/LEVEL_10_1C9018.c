/* LEVEL_10:0x1C9018 -- placement copy of LEVEL_01_1C5638.c: calls a helper on a table entry, then optionally a second helper. */

extern char D_00211CE8[];

int func_081000(void *a0, void *a1, int a2, int a3, int a4, int a5, int a6, int a7,
                float f12, float f13, float f14, float f15);
void func_027F90(void *a0);

void func_1C9018(char *a0)
{
    char *ent;
    char *a1;
    unsigned char *s1;

    ent = D_00211CE8 + (*(unsigned char *)(a0 + 0x46) << 5);
    a1 = *(char **)(ent + 0x18);
    s1 = *(unsigned char **)(a0 + 0x54);
    if (a1 != 0) {
        func_081000(a0, a1, 0, 0, 0, 0, 0, 1, *(float *)(a1 + 0x14), *(float *)(a1 + 0x18),
                    *(float *)(a1 + 0x1C), *(float *)(a1 + 0x20));
    }
    a0[0x45] = 1;
    if (s1[0xD] != 0) {
        func_027F90(*(void **)(a0 + 0x5C));
    }
}
