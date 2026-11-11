/* LEVEL_20:0x01E578 -- placement copy of LEVEL_16_021758.c: formats a label for a record into the caller's buffer, by plain copy for low modes and by a mode-selected format for modes 4 to 7. */

typedef struct Rec021758 {
    char pad_00[0x10];
    int f_10;
} Rec021758;

typedef struct Obj021758 {
    char pad_00[0xF8];
    int f_F8;
} Obj021758;

extern char *strncpy(char *dst, const char *src, unsigned int n);
extern int sprintf(char *dst, const char *fmt, ...);

Rec021758 *func_01EE10(int key, int sel);
Rec021758 *func_01EE70(int key, int kind, int sel);
char *func_0E2118(int id);

void func_01E578(Obj021758 *o, char *buf, int key, unsigned int mode, unsigned int n)
{
    Rec021758 *r;

    if (mode < 3) {
        strncpy(buf, func_0E2118(func_01EE10(key, o->f_F8)->f_10), n);
    } else {
        r = func_01EE70(key, 2, o->f_F8);
        switch (mode) {
        case 4:
            sprintf(buf, func_0E2118(0x319), func_0E2118(r->f_10), n);
            break;
        case 5:
            sprintf(buf, func_0E2118(0x31A), func_0E2118(r->f_10), n);
            break;
        case 6:
            sprintf(buf, func_0E2118(0x31B), func_0E2118(r->f_10), n);
            break;
        case 7:
            sprintf(buf, func_0E2118(0x31C), func_0E2118(r->f_10), n);
            break;
        }
    }
}
