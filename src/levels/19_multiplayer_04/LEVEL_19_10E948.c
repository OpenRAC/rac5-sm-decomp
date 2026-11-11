/* LEVEL_19:10E948 -- forwards the level's cached colour to the shared
   routine when the cache slot is filled. */
typedef struct {
    char pad[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Rec;

extern void *D_1B5BBC;

extern void func_073660(void *a0, void *a1, int a2, int a3, int a4, int a5,
                        int a6, int a7, float f1, float f2, float f3, float f4);

void func_10E948(void *a0)
{
    Rec *p = (Rec *)D_1B5BBC;
    if (p != 0) {
        func_073660(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
}
