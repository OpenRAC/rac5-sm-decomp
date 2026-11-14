/* LEVEL_01:0x170218 -- runs func_097620 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_097620(char *record);

void func_170218(Obj *o)
{
    char *record = o->record;

    func_097620(record + 0x64);
    func_097620(record + 0x80);
}
