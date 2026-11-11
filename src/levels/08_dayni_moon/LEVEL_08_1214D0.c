/* LEVEL_08.REL:0x1214D0 -- uses the caller's block or the local one and relays
   it with the current record. */
typedef struct {
    char pad0[8];
    int f_08;
} G;

extern G *D_0024FC68;

void func_121510(void *a0, void *a1, int a2, void *a3, float f);

void func_1214D0(void *a0, void *a1, char *a2)
{
    char buf[8];
    void *p = a2 ? (void *)a2 : (void *)buf;

    func_121510(p, a0, D_0024FC68->f_08, a1, *(float *)((char *)a1 + 0xC));
}
