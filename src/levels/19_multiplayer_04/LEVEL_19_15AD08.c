/* LEVEL_19:0x15AD08 -- drops the object's linked record when its flags have bit 1 or 2 set, then runs the update helper on the object. */
extern void func_15B498(char *o, float f);

void func_15AD08(char *object, float f)
{
    char *state = *(char **)(object + 0x58);
    char *link = *(char **)(state + 0x98);

    if (link != 0 && (*(unsigned int *)(link + 0x64) & 6) != 0) {
        *(int *)(state + 0x98) = 0;
    }
    func_15B498(object, f);
}
