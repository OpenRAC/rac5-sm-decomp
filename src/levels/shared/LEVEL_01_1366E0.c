/* LEVEL_01.REL:0x1366E0 -- float at obj->ptr->field. */

float func_1366E0(void *obj)
{
    void *p = *(void **)((char *)obj + 0x58);
    return *(float *)((char *)p + 0x4C);
}
