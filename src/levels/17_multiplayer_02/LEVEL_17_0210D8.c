/* LEVEL_17:0x0210D8 -- placement copy of LEVEL_16_021758.c: formats a label for a record into the caller's buffer, by plain copy for low modes and by a mode-selected format for modes 4 to 7. */

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

Rec021758 *func_021A90(int key, int sel);
Rec021758 *func_021AF0(int key, int kind, int sel);
char *func_10E8A8(int id);

void func_0210D8(Obj021758 *o, char *buf, int key, unsigned int mode, unsigned int n)
{
    Rec021758 *r;

    if (mode < 3) {
        strncpy(buf, func_10E8A8(func_021A90(key, o->f_F8)->f_10), n);
    } else {
        r = func_021AF0(key, 2, o->f_F8);
        switch (mode) {
        case 4:
            sprintf(buf, func_10E8A8(0x319), func_10E8A8(r->f_10), n);
            break;
        case 5:
            sprintf(buf, func_10E8A8(0x31A), func_10E8A8(r->f_10), n);
            break;
        case 6:
            sprintf(buf, func_10E8A8(0x31B), func_10E8A8(r->f_10), n);
            break;
        case 7:
            sprintf(buf, func_10E8A8(0x31C), func_10E8A8(r->f_10), n);
            break;
        }
    }
}
