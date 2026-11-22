/* LEVEL_20:0x0932A0 -- placement copy of LEVEL_01_0B9D20.c: reports the visible range of a record: the whole span when the flag bit is clear, otherwise a clamped window derived from a divided counter. */
extern int func_093290(char *state);

void func_0932A0(char *state, int *start, int *end)
{
    int value;
    int limit;
    int maximum;
    int lo;

    if ((*(unsigned int *)(state + 0x14) & 2) == 0) {
        *start = 0;
        *end = *(int *)(state + 4);
        return;
    }

    value = *(int *)(state + 0x68) / func_093290(state);
    limit = value + *(int *)(state + 0x74);
    lo = 0;
    if (value >= 0) {
        lo = value;
    }
    maximum = *(int *)(state + 4);
    if (limit <= maximum) {
        maximum = limit;
    }
    *start = lo;
    *end = maximum;
}
