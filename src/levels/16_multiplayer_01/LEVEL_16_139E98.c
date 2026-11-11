/* LEVEL_16:0x139E98 -- finds the first of two candidates whose probe point passes two region tests within range of the object, and records it. */

extern char *func_112CE8(unsigned int a0);
extern void func_13A010(void *a0, float *a1);
extern int func_0763F8(void *a0, float *a1);

static __inline__ void Sub3(float *dst, float *a, float *b)
{
    dst[0] = a[0] - b[0];
    dst[1] = a[1] - b[1];
    dst[2] = a[2] - b[2];
}

int func_139E98(char *obj)
{
    char *info;
    char *rec;
    char *cand;
    unsigned int i;
    float vec[4];
    float diff[3];

    info = *(char **)(obj + 0x54);
    rec = *(char **)(obj + 0x58);
    if (*(void **)(info + 0x2C) != 0) {
        for (i = 0; i < 2; i++) {
            cand = func_112CE8(i);
            if (cand != 0 && *(void **)(cand + 0x59C) != 0) {
                func_13A010(*(void **)(cand + 0x59C), vec);
                if (func_0763F8(*(void **)(info + 0x2C), vec) != 0) {
                    if (*(void **)(info + 0x34) == 0 || func_0763F8(*(void **)(info + 0x34), vec) == 0) {
                        Sub3(diff, vec, (float *)(obj + 0x30));
                        if (diff[0] * diff[0] + diff[1] * diff[1] + diff[2] * diff[2] <= 625.0f) {
                            *(void **)(rec + 0x5C) = *(void **)(cand + 0x59C);
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
