/* USA SCUS_976.15 boot: LIGHT_SetupLightsNearPoint__FPC4VEC314LIGHTING_MODELUiPC9NodeLightUiPC16DirectionalLightUiPC10PointLight, 0x01E88968.
 * Observed body: 112 bytes, followed by unrelated non-body words that fill the rest of its 232 byte interval.
 * Measured 17 November 2026: all 112 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. It appends light data at the current
 * display list write position by calling the larger overload with a 0x400
 * limit, then stores the returned end as the new write position and sets the
 * second display list pointer to 16 bytes past it. It is declared void, as
 * the accepted wrapper LIGHT_SetupLightsNearPoint__FPC4VEC314LIGHTING_MODELUiPC9NodeLight
 * declares it; the new end is still in the result register on return, but
 * no caller is known to use it. Still 112/112 on both routes (26 November).
 * The current write position has to be read into its own local before the
 * call; reading it inside the argument list changes the argument shuffling.
 */
typedef struct DisplayList {
    int pad0;
    unsigned int *limit;   /* 0x04 */
    unsigned int *cursor;  /* 0x08 */
} DisplayList;

extern DisplayList *g_displist; /* 0x01F78BC4 */

extern unsigned int *
LIGHT_SetupLightsNearPoint__FPUiUiPC4VEC314LIGHTING_MODELUiPC9NodeLightUiPC16DirectionalLightUiPC10PointLight(
    unsigned int *dst, unsigned int size, const void *position, int model,
    unsigned int count, const void *node_light, unsigned int n_directional,
    const void *directional, unsigned int n_point, const void *point);

void
LIGHT_SetupLightsNearPoint__FPC4VEC314LIGHTING_MODELUiPC9NodeLightUiPC16DirectionalLightUiPC10PointLight(
    const void *position, int model, unsigned int count, const void *node_light,
    unsigned int n_directional, const void *directional, unsigned int n_point,
    const void *point) {
    DisplayList *dl = g_displist;
    unsigned int *start = dl->cursor;
    unsigned int *end =
        LIGHT_SetupLightsNearPoint__FPUiUiPC4VEC314LIGHTING_MODELUiPC9NodeLightUiPC16DirectionalLightUiPC10PointLight(
            start, 0x400, position, model, count, node_light,
            n_directional, directional, n_point, point);
    dl->limit = end + 4;
    dl->cursor = end;
}
