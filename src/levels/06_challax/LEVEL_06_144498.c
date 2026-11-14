/* LEVEL_06:0x144498 -- placement copy of LEVEL_01_14DDA0.c: walks the object's record array and, for each active record, starts its follow-up (with 1 when the record's owner flag is set) then updates it. */
extern void func_076268(char *object, int a1);
extern void func_144518(char *object);

void func_144498(char *object)
{
    char *rec;
    char *end;

    rec = *(char **)(object + 0xC);
    end = rec + *(int *)(object + 0x30) * 0x80;
    while (rec != end) {
        if (*(int *)(rec + 0x64) & 1) {
            if (*(int *)(*(char **)(rec + 0x58) + 0xA4) & 1) {
                func_076268(rec, 1);
            }
            func_144518(rec);
        }
        rec += 0x80;
    }
}
