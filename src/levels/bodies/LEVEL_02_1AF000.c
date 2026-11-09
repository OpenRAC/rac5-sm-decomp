/* LEVEL_02:0x1AF000 -- decrements a countdown; on expiry resets it, marks the record and copies a vector to the linked target. */

extern int D_0024CBEC;

void func_0AC910(int a0, unsigned int a1, int a2, int a3, int t0, int t1);
void func_08E718(int a0);

void func_1AF000(char *obj)
{
    float t;
    float *s;
    float *d;
    char *a0;
    char *p;

    func_0AC910(0, 0xFF000000u, 1, 0x20, 3, 0);
    t = *(float *)(obj + 0x70) - 1.0f;
    *(float *)(obj + 0x70) = t;
    if (t <= 0.0f) {
        func_08E718(2);
        *(unsigned char *)(obj + 0x45) = 3;
        *(float *)(obj + 0x70) = 30.0f;
        p = *(char **)(obj + 0x54);
        a0 = *(char **)(p + 4);
        if (D_0024CBEC == (int)a0) {
            a0 = *(char **)p;
        }
        *(float *)(a0 + 0x30) = *(float *)(p + 0x10);
        s = (float *)(p + 0x10);
        d = (float *)(a0 + 0x30);
        d[1] = s[1];
        d[2] = s[2];
    }
}
