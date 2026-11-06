/* LEVEL_02.REL:0x2012A0, bounded 196-byte candidate.
 * Isolated pinned C object: 252 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int *func_002001F8(void);
extern int func_00201078(void);
extern int func_002034F0(int);
extern void func_00201180(int *);

void func_002012A0(int *param_1)
{
    int *p;
    int *slot;
    int node;
    long count;
    void (*cb)(int, int);

    p = func_002001F8();
    count = *(long *)((char *)param_1 + 0x20) - 1;
    *(long *)((char *)param_1 + 0x20) = count;
    if (count != 0) {
        return;
    }
    node = *p;
    if (param_1 == (int *)node && *(int *)((char *)param_1 + 0x14) == 0) {
        return;
    }
    slot = p;
    if (node != 0) {
        int cur = node;
        int next;

        if (cur == (int)param_1) {
            slot = p;
        } else {
            next = *(int *)(cur + 0x18);
            while (next != 0) {
                slot = (int *)(cur + 0x18);
                cur = *slot;
                if (next == (int)param_1) {
                    break;
                }
                next = *(int *)(cur + 0x18);
            }
            if (next == 0) {
                cur = func_00201078();
                slot = (int *)cur;
            }
        }
    } else {
        node = func_00201078();
        slot = (int *)node;
    }
    *slot = node;
    cb = *(void (**)(int, int))((char *)param_1 + 0x10);
    if (cb != 0) {
        cb(*(int *)((char *)param_1 + 8), 2);
    }
    if (func_002034F0(*(int *)((char *)param_1 + 0xC)) == 0) {
        func_00201180(*(int **)((char *)param_1 + 0x28));
    }
    func_00201180(param_1);
}
