/* LEVEL_01:0x11A4C8 -- walks a 16-entry table of three-word state records and advances pending entries. */
typedef struct {
    char *a;
    int state;
    int c;
} E;
extern E D_00206DB0[];
extern int func_029688(void *unused, int *out);

void func_11A4C8(void)
{
    int i;
    int local;
    int local2;
    int r;

    for (i = 0; i < 16; i++) {
        if (D_00206DB0[i].state == 1) {
            r = func_029688(D_00206DB0[i].a - 1, &local);
            if (r != 1) {
                D_00206DB0[i].state = 3;
                D_00206DB0[i].a = (char *)(local + 1);
            }
        } else if (D_00206DB0[i].state == 2) {
            r = func_029688(D_00206DB0[i].a - 1, &local2);
            if (r != 1)
                D_00206DB0[i].state = 3;
        }
    }
}
