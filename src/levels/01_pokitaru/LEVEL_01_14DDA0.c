/* LEVEL_01:0x14DDA0 -- walks the object's record array and, for each active record, starts its follow-up (with 1 when the record's owner flag is set) then updates it. */
extern void func_07C670(char *object, int a1);
extern void func_14DE20(char *object);

void func_14DDA0(char *object)
{
    char *rec;
    char *end;

    rec = *(char **)(object + 0xC);
    end = rec + *(int *)(object + 0x30) * 0x80;
    while (rec != end) {
        if (*(int *)(rec + 0x64) & 1) {
            if (*(int *)(*(char **)(rec + 0x58) + 0xA4) & 1) {
                func_07C670(rec, 1);
            }
            func_14DE20(rec);
        }
        rec += 0x80;
    }
}
