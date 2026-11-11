/* LEVEL_18:0x021DF8 -- placement copy of LEVEL_16_0227B0.c: tries up to three slots; on success stores a byte at the slot offset 0x4B. */

int func_021B18(void *a0, void *a1, int a2, int a3);
int func_021CA8(void *a0, void *a1, int a2);
int func_021710(void *a0, int a1);

int func_021DF8(void *obj, void *p1, int val, int p3)
{
    unsigned int i;
    int base;

    for (i = 0; i < 3; i++) {
        if (func_021B18(obj, p1, i, p3) != 0) {
            if (func_021CA8(obj, p1, p3) != 0) {
                return 0;
            }
            base = func_021710(obj, p3);
            *(char *)(base + i + 0x4B) = (char)val;
            return 1;
        }
    }
    return 0;
}
