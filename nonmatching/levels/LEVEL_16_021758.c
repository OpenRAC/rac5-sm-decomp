/* LEVEL_16.REL:0x021758: reviewed 312-byte candidate, held for ABI review.
 * Formats a label for a record into the caller's buffer, by plain copy for low
 * modes and by a mode-selected format for modes 4 to 7.
 * pinned C with gnu-ee-trial links 312/312 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_022110 returning pointer with (int, int), but the held
 * byte-exact candidate LEVEL_16_022110.c defines it returning int with (int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

Rec021758 *func_022110(int key, int sel);
Rec021758 *func_022170(int key, int kind, int sel);
char *func_10F330(int id);

void func_021758(Obj021758 *o, char *buf, int key, unsigned int mode, unsigned int n)
{
    Rec021758 *r;

    if (mode < 3) {
        strncpy(buf, func_10F330(func_022110(key, o->f_F8)->f_10), n);
    } else {
        r = func_022170(key, 2, o->f_F8);
        switch (mode) {
        case 4:
            sprintf(buf, func_10F330(0x319), func_10F330(r->f_10), n);
            break;
        case 5:
            sprintf(buf, func_10F330(0x31A), func_10F330(r->f_10), n);
            break;
        case 6:
            sprintf(buf, func_10F330(0x31B), func_10F330(r->f_10), n);
            break;
        case 7:
            sprintf(buf, func_10F330(0x31C), func_10F330(r->f_10), n);
            break;
        }
    }
}
