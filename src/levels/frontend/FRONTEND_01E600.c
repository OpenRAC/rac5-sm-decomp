/* FRONTEND:0x01E600 -- placement copy of LEVEL_01_11A4C8.c: walks a 16-entry table of three-word state records and advances pending entries. */
typedef struct {
    char *a;
    int state;
    int c;
} E;
extern E D_00032608[];
extern int func_0025E0(void *unused, int *out);

void func_01E600(void)
{
    int i;
    int local;
    int local2;
    int r;

    for (i = 0; i < 16; i++) {
        if (D_00032608[i].state == 1) {
            r = func_0025E0(D_00032608[i].a - 1, &local);
            if (r != 1) {
                D_00032608[i].state = 3;
                D_00032608[i].a = (char *)(local + 1);
            }
        } else if (D_00032608[i].state == 2) {
            r = func_0025E0(D_00032608[i].a - 1, &local2);
            if (r != 1)
                D_00032608[i].state = 3;
        }
    }
}
