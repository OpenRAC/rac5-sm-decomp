/* LEVEL_15:0x0DE828 -- placement copy of LEVEL_01_11A4C8.c: walks a 16-entry table of three-word state records and advances pending entries. */
typedef struct {
    char *a;
    int state;
    int c;
} E;
extern E D_0015B730[];
extern int func_022E60(void *unused, int *out);

void func_0DE828(void)
{
    int i;
    int local;
    int local2;
    int r;

    for (i = 0; i < 16; i++) {
        if (D_0015B730[i].state == 1) {
            r = func_022E60(D_0015B730[i].a - 1, &local);
            if (r != 1) {
                D_0015B730[i].state = 3;
                D_0015B730[i].a = (char *)(local + 1);
            }
        } else if (D_0015B730[i].state == 2) {
            r = func_022E60(D_0015B730[i].a - 1, &local2);
            if (r != 1)
                D_0015B730[i].state = 3;
        }
    }
}
