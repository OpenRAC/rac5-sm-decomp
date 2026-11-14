/* LEVEL_07:0x17A120 -- placement copy of LEVEL_01_170218.c: runs func_0995D0 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_0995D0(char *record);

void func_17A120(Obj *o)
{
    char *record = o->record;

    func_0995D0(record + 0x64);
    func_0995D0(record + 0x80);
}
