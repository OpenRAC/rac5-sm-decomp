/* LEVEL_24:0x19A198 -- looks the object's resource up in the table at +0x30; when found, queues the effect sound, and once the sound call reports success fires the effect request with the object's byte (+0x45). */
extern char D_00201040[];

extern int func_07E278(int id, char *table);
extern int func_127FB0(int id);
extern void func_0AED38(void *arg0, void *arg1, void *arg2, void *arg3);
extern int func_0AE8C8(void);
extern void func_0244A0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);

void func_19A198(char *object)
{
    char *table;

    table = D_00201040;
    if (func_07E278(**(int **)(object + 0x54), table + 0x30) != 0) {
        func_0AED38((void *)1, (void *)func_127FB0(0x2FF), 0, 0);
        if (func_0AE8C8() == 1) {
            func_0244A0(0x18, *(unsigned char *)(object + 0x45), 0, 0, 0, 0, -1, 0);
        }
    }
}
