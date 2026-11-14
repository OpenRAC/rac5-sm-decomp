/* LEVEL_08:0x18AD38 -- placement copy of LEVEL_01_170218.c: runs func_09F668 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_09F668(char *record);

void func_18AD38(Obj *o)
{
    char *record = o->record;

    func_09F668(record + 0x64);
    func_09F668(record + 0x80);
}
