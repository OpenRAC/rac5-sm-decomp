/* LEVEL_22:0x10F8A0 -- steps an index forward or backward through a list of count entries, wrapping when allowed; returns 0 when there is no list/output or the step would wrap without permission. */
typedef struct { char p[0x14]; unsigned short count; } List;
int func_10F8A0(unsigned int *out, unsigned int index, List *list, int forward, int wrap)
{
    unsigned int v;

    if (list == 0 || out == 0) {
        return 0;
    }
    if (forward) {
        if (index == list->count - 1) {
            if (!wrap) return 0;
            *out = 0;
        } else {
            *out = index + 1;
        }
        return 1;
    }
    if (index == 0) {
        if (wrap) {
            v = list->count - 1;
        } else {
            return 0;
        }
    } else {
        v = index - 1;
    }
    *out = v;
    return 1;
}
