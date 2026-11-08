/* LEVEL_02.REL:0x016950: reviewed 80-byte candidate.
 * pinned C with gnu-ee-trial links 80 bytes; first differs at +25.
 * Retry: Find a source or qualified call profile that moves the second argument
 * before the first JAL and the first into its delay slot.
 * No matching credit.
 */
extern float func_086FB8(void *, void *);
extern int func_1FFF10(float);
extern void func_0169A0(void *, void *, int);

void func_016950(void *first, void *second, void *third, void *fourth)
{
    float value;
    int handle;
    value = func_086FB8(third, fourth);
    handle = func_1FFF10(value);
    func_0169A0(first, second, handle);
}
