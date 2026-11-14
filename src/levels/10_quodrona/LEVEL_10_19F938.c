/* LEVEL_10:0x19F938 -- stops the attached sound when one is set and clears it, then runs func_097AB8 on the embedded record. */
extern void func_081168(char *record);
extern void func_097AB8(char *record);

void func_19F938(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *sound = *(char **)(nested + 0x94);

    if (sound != 0) {
        func_081168(sound);
        *(int *)(nested + 0x94) = 0;
    }
    func_097AB8(nested + 0x40);
}
