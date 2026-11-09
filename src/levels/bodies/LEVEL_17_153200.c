/* LEVEL_17:0x153200 -- walks a table of 0x80-byte entries; fails if an entry flagged by bit 0 is rejected. */

extern int D_001B1204;
extern int D_001B1208;
extern char D_001D5390[];
extern int func_16A7D0(char *a0);
extern int func_16A818(char *a0);

int func_153200(void)
{
    int p;

    for (p = D_001B1204; p != D_001B1208; p += 0x80) {
        char *t;

        t = D_001D5390;
        if (func_16A7D0((char *)p) != *(int *)(t + 0xFC)) {
            if (*(int *)((char *)p + 0x64) & 1) {
                if (func_16A818((char *)p) == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}
