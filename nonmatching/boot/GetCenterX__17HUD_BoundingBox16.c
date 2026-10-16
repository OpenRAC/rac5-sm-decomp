typedef struct {
    int left;
} tHUD_BoundingBox;

extern int GetWidth__17HUD_BoundingBox16(tHUD_BoundingBox *self);

int GetCenterX__17HUD_BoundingBox16(tHUD_BoundingBox *self) {
    return (GetWidth__17HUD_BoundingBox16(self) >> 1) + self->left;
}
