/* USA SCUS_976.15 boot, 0x01E94010..0x01E940DC: 204 body bytes.
 * Reconstructed from the owner's retail body and its named callers/callees.
 * One zero alignment word follows through 0x01E940E0; no direct outside
 * branch enters the body interior or that word in the reviewed boot text.
 * Independent SN links reproduce 204/204 bytes under the rebuilt default
 * GNU route and gnu-ee-trial, -O2 -G0, default GNU assembler.
 * The word/pointer declarations follow accepted boot display-list helpers;
 * unsigned long is the measured 64-bit EE type, not a host-portable typedef.
 * Parameter roles remain neutral: mode 1 chooses register IDs 8 and 0x42,
 * all other modes choose 9 and 0x43; IDs 0x46 and 0x3B are unconditional.
 * The caller must supply valid display-list storage. Record names and the
 * complete capacity invariant still require semantic review. Rebuilt tools
 * are not hash-qualified; no promotion or C matching credit is claimed.
 */
typedef struct { char pad0[4]; unsigned long *cur; } DLIB_DISPLIST;
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(int *);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(int *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(DLIB_DISPLIST *, unsigned long, unsigned long);

void dlib_displist_set_texture_state__FP13DLIB_DISPLISTiUlUlUlUl(
    void *display_list, int mode, unsigned long first, unsigned long second,
    unsigned long third, unsigned long fourth)
{
    unsigned long first_register;
    unsigned long third_register;
    if (mode == 1) {
        first_register = 8;
        third_register = 0x42;
    } else {
        first_register = 9;
        third_register = 0x43;
    }
    dlib_displist_direct_begin__FP13DLIB_DISPLIST((int *)display_list);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl((DLIB_DISPLIST *)display_list, first, first_register);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl((DLIB_DISPLIST *)display_list, second, 0x46);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl((DLIB_DISPLIST *)display_list, third, third_register);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl((DLIB_DISPLIST *)display_list, fourth, 0x3B);
    dlib_displist_direct_end__FP13DLIB_DISPLIST((int *)display_list);
}
