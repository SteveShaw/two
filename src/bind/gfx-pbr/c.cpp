#include <infra/Api.h>
#include <type/Api.h>
#include <math/Api.h>
#include <geom/Api.h>
#include <gfx/Api.h>
#include <gfx-pbr/Api.h>

#ifdef MUD_PLATFORM_EMSCRIPTEN
#include <emscripten.h>
#define DECL EMSCRIPTEN_KEEPALIVE
#else
#define DECL
#endif


extern "C" {
	
	// BCS
	mud::BCS* DECL mud_BCS_BCS_0() {
		return new mud::BCS();
	}
	bool DECL mud_BCS__get_enabled(mud::BCS* self) {
		return self->m_enabled;
	}
	void DECL mud_BCS__set_enabled(mud::BCS* self, bool value) {
		self->m_enabled = value;
	}
	float DECL mud_BCS__get_brightness(mud::BCS* self) {
		return self->m_brightness;
	}
	void DECL mud_BCS__set_brightness(mud::BCS* self, float value) {
		self->m_brightness = value;
	}
	float DECL mud_BCS__get_contrast(mud::BCS* self) {
		return self->m_contrast;
	}
	void DECL mud_BCS__set_contrast(mud::BCS* self, float value) {
		self->m_contrast = value;
	}
	float DECL mud_BCS__get_saturation(mud::BCS* self) {
		return self->m_saturation;
	}
	void DECL mud_BCS__set_saturation(mud::BCS* self, float value) {
		self->m_saturation = value;
	}
	void DECL mud_BCS__destroy(mud::BCS* self) {
		delete self;
	}
	// DofBlur
	mud::DofBlur* DECL mud_DofBlur_DofBlur_0() {
		return new mud::DofBlur();
	}
	bool DECL mud_DofBlur__get_enabled(mud::DofBlur* self) {
		return self->m_enabled;
	}
	void DECL mud_DofBlur__set_enabled(mud::DofBlur* self, bool value) {
		self->m_enabled = value;
	}
	float DECL mud_DofBlur__get_far_distance(mud::DofBlur* self) {
		return self->m_far_distance;
	}
	void DECL mud_DofBlur__set_far_distance(mud::DofBlur* self, float value) {
		self->m_far_distance = value;
	}
	float DECL mud_DofBlur__get_far_transition(mud::DofBlur* self) {
		return self->m_far_transition;
	}
	void DECL mud_DofBlur__set_far_transition(mud::DofBlur* self, float value) {
		self->m_far_transition = value;
	}
	float DECL mud_DofBlur__get_far_radius(mud::DofBlur* self) {
		return self->m_far_radius;
	}
	void DECL mud_DofBlur__set_far_radius(mud::DofBlur* self, float value) {
		self->m_far_radius = value;
	}
	float DECL mud_DofBlur__get_near_distance(mud::DofBlur* self) {
		return self->m_near_distance;
	}
	void DECL mud_DofBlur__set_near_distance(mud::DofBlur* self, float value) {
		self->m_near_distance = value;
	}
	float DECL mud_DofBlur__get_near_transition(mud::DofBlur* self) {
		return self->m_near_transition;
	}
	void DECL mud_DofBlur__set_near_transition(mud::DofBlur* self, float value) {
		self->m_near_transition = value;
	}
	float DECL mud_DofBlur__get_near_radius(mud::DofBlur* self) {
		return self->m_near_radius;
	}
	void DECL mud_DofBlur__set_near_radius(mud::DofBlur* self, float value) {
		self->m_near_radius = value;
	}
	float DECL mud_DofBlur__get_max_coc_radius(mud::DofBlur* self) {
		return self->m_max_coc_radius;
	}
	void DECL mud_DofBlur__set_max_coc_radius(mud::DofBlur* self, float value) {
		self->m_max_coc_radius = value;
	}
	void DECL mud_DofBlur__destroy(mud::DofBlur* self) {
		delete self;
	}
	// GIProbe
	void DECL mud_GIProbe__destroy(mud::GIProbe* self) {
		delete self;
	}
	// Glow
	mud::Glow* DECL mud_Glow_Glow_0() {
		return new mud::Glow();
	}
	bool DECL mud_Glow__get_enabled(mud::Glow* self) {
		return self->m_enabled;
	}
	void DECL mud_Glow__set_enabled(mud::Glow* self, bool value) {
		self->m_enabled = value;
	}
	mud::vec4* DECL mud_Glow__get_levels_1_4(mud::Glow* self) {
		static mud::vec4 temp;
		return (temp = self->m_levels_1_4, &temp);
	}
	void DECL mud_Glow__set_levels_1_4(mud::Glow* self, mud::vec4* value) {
		self->m_levels_1_4 = *value;
	}
	mud::vec4* DECL mud_Glow__get_levels_5_8(mud::Glow* self) {
		static mud::vec4 temp;
		return (temp = self->m_levels_5_8, &temp);
	}
	void DECL mud_Glow__set_levels_5_8(mud::Glow* self, mud::vec4* value) {
		self->m_levels_5_8 = *value;
	}
	float DECL mud_Glow__get_intensity(mud::Glow* self) {
		return self->m_intensity;
	}
	void DECL mud_Glow__set_intensity(mud::Glow* self, float value) {
		self->m_intensity = value;
	}
	float DECL mud_Glow__get_bloom(mud::Glow* self) {
		return self->m_bloom;
	}
	void DECL mud_Glow__set_bloom(mud::Glow* self, float value) {
		self->m_bloom = value;
	}
	float DECL mud_Glow__get_bleed_threshold(mud::Glow* self) {
		return self->m_bleed_threshold;
	}
	void DECL mud_Glow__set_bleed_threshold(mud::Glow* self, float value) {
		self->m_bleed_threshold = value;
	}
	float DECL mud_Glow__get_bleed_scale(mud::Glow* self) {
		return self->m_bleed_scale;
	}
	void DECL mud_Glow__set_bleed_scale(mud::Glow* self, float value) {
		self->m_bleed_scale = value;
	}
	bool DECL mud_Glow__get_bicubic_filter(mud::Glow* self) {
		return self->m_bicubic_filter;
	}
	void DECL mud_Glow__set_bicubic_filter(mud::Glow* self, bool value) {
		self->m_bicubic_filter = value;
	}
	void DECL mud_Glow__destroy(mud::Glow* self) {
		delete self;
	}
	// LightShadow
	mud::LightShadow* DECL mud_LightShadow_LightShadow_0() {
		return new mud::LightShadow();
	}
	void DECL mud_LightShadow__destroy(mud::LightShadow* self) {
		delete self;
	}
	// Lightmap
	void DECL mud_Lightmap__destroy(mud::Lightmap* self) {
		delete self;
	}
	// LightmapAtlas
	void DECL mud_LightmapAtlas__destroy(mud::LightmapAtlas* self) {
		delete self;
	}
	// LightmapItem
	void DECL mud_LightmapItem__destroy(mud::LightmapItem* self) {
		delete self;
	}
	// ReflectionProbe
	mud::Node3* DECL mud_ReflectionProbe__get_node(mud::ReflectionProbe* self) {
		return &self->m_node;
	}
	bool DECL mud_ReflectionProbe__get_visible(mud::ReflectionProbe* self) {
		return self->m_visible;
	}
	void DECL mud_ReflectionProbe__set_visible(mud::ReflectionProbe* self, bool value) {
		self->m_visible = value;
	}
	float DECL mud_ReflectionProbe__get_intensity(mud::ReflectionProbe* self) {
		return self->m_intensity;
	}
	void DECL mud_ReflectionProbe__set_intensity(mud::ReflectionProbe* self, float value) {
		self->m_intensity = value;
	}
	mud::vec3* DECL mud_ReflectionProbe__get_extents(mud::ReflectionProbe* self) {
		static mud::vec3 temp;
		return (temp = self->m_extents, &temp);
	}
	void DECL mud_ReflectionProbe__set_extents(mud::ReflectionProbe* self, mud::vec3* value) {
		self->m_extents = *value;
	}
	bool DECL mud_ReflectionProbe__get_shadows(mud::ReflectionProbe* self) {
		return self->m_shadows;
	}
	void DECL mud_ReflectionProbe__set_shadows(mud::ReflectionProbe* self, bool value) {
		self->m_shadows = value;
	}
	bool DECL mud_ReflectionProbe__get_dirty(mud::ReflectionProbe* self) {
		return self->m_dirty;
	}
	void DECL mud_ReflectionProbe__set_dirty(mud::ReflectionProbe* self, bool value) {
		self->m_dirty = value;
	}
	void DECL mud_ReflectionProbe__destroy(mud::ReflectionProbe* self) {
		delete self;
	}
	// RenderFilters
	mud::RenderFilters* DECL mud_RenderFilters_RenderFilters_0() {
		return new mud::RenderFilters();
	}
	mud::DofBlur* DECL mud_RenderFilters__get_dof_blur(mud::RenderFilters* self) {
		static mud::DofBlur temp;
		return (temp = self->m_dof_blur, &temp);
	}
	void DECL mud_RenderFilters__set_dof_blur(mud::RenderFilters* self, mud::DofBlur* value) {
		self->m_dof_blur = *value;
	}
	mud::Glow* DECL mud_RenderFilters__get_glow(mud::RenderFilters* self) {
		static mud::Glow temp;
		return (temp = self->m_glow, &temp);
	}
	void DECL mud_RenderFilters__set_glow(mud::RenderFilters* self, mud::Glow* value) {
		self->m_glow = *value;
	}
	mud::BCS* DECL mud_RenderFilters__get_bcs(mud::RenderFilters* self) {
		static mud::BCS temp;
		return (temp = self->m_bcs, &temp);
	}
	void DECL mud_RenderFilters__set_bcs(mud::RenderFilters* self, mud::BCS* value) {
		self->m_bcs = *value;
	}
	mud::Tonemap* DECL mud_RenderFilters__get_tonemap(mud::RenderFilters* self) {
		static mud::Tonemap temp;
		return (temp = self->m_tonemap, &temp);
	}
	void DECL mud_RenderFilters__set_tonemap(mud::RenderFilters* self, mud::Tonemap* value) {
		self->m_tonemap = *value;
	}
	void DECL mud_RenderFilters__destroy(mud::RenderFilters* self) {
		delete self;
	}
	// Tonemap
	mud::Tonemap* DECL mud_Tonemap_Tonemap_0() {
		return new mud::Tonemap();
	}
	mud::TonemapMode DECL mud_Tonemap__get_mode(mud::Tonemap* self) {
		return self->m_mode;
	}
	void DECL mud_Tonemap__set_mode(mud::Tonemap* self, mud::TonemapMode value) {
		self->m_mode = value;
	}
	bool DECL mud_Tonemap__get_enabled(mud::Tonemap* self) {
		return self->m_enabled;
	}
	void DECL mud_Tonemap__set_enabled(mud::Tonemap* self, bool value) {
		self->m_enabled = value;
	}
	float DECL mud_Tonemap__get_exposure(mud::Tonemap* self) {
		return self->m_exposure;
	}
	void DECL mud_Tonemap__set_exposure(mud::Tonemap* self, float value) {
		self->m_exposure = value;
	}
	float DECL mud_Tonemap__get_white_point(mud::Tonemap* self) {
		return self->m_white_point;
	}
	void DECL mud_Tonemap__set_white_point(mud::Tonemap* self, float value) {
		self->m_white_point = value;
	}
	void DECL mud_Tonemap__destroy(mud::Tonemap* self) {
		delete self;
	}
	// BlockBlur
	void DECL mud_BlockBlur__destroy(mud::BlockBlur* self) {
		delete self;
	}
	// BlockDofBlur
	void DECL mud_BlockDofBlur__destroy(mud::BlockDofBlur* self) {
		delete self;
	}
	// BlockGIBake
	void DECL mud_BlockGIBake__destroy(mud::BlockGIBake* self) {
		delete self;
	}
	// BlockGITrace
	void DECL mud_BlockGITrace__destroy(mud::BlockGITrace* self) {
		delete self;
	}
	// BlockGeometry
	void DECL mud_BlockGeometry__destroy(mud::BlockGeometry* self) {
		delete self;
	}
	// BlockGlow
	void DECL mud_BlockGlow__destroy(mud::BlockGlow* self) {
		delete self;
	}
	// BlockLight
	void DECL mud_BlockLight__destroy(mud::BlockLight* self) {
		delete self;
	}
	// BlockLightmap
	void DECL mud_BlockLightmap__destroy(mud::BlockLightmap* self) {
		delete self;
	}
	// BlockRadiance
	void DECL mud_BlockRadiance__destroy(mud::BlockRadiance* self) {
		delete self;
	}
	// BlockReflection
	void DECL mud_BlockReflection__destroy(mud::BlockReflection* self) {
		delete self;
	}
	// BlockShadow
	void DECL mud_BlockShadow__destroy(mud::BlockShadow* self) {
		delete self;
	}
	// BlockTonemap
	void DECL mud_BlockTonemap__destroy(mud::BlockTonemap* self) {
		delete self;
	}
	mud::GIProbe* DECL mud_gfx_gi_probe_3(mud::Gnode* parent, uint16_t subdiv, const mud::vec3* extents) {
		return &mud::gfx::gi_probe(*parent, subdiv, *extents);
	}
	mud::LightmapAtlas* DECL mud_gfx_lightmap_2(mud::Gnode* parent, uint32_t resolution) {
		return &mud::gfx::lightmap(*parent, resolution);
	}
	mud::LightmapAtlas* DECL mud_gfx_lightmap_3(mud::Gnode* parent, uint32_t resolution, float density) {
		return &mud::gfx::lightmap(*parent, resolution, density);
	}
	mud::LightmapAtlas* DECL mud_gfx_lightmap_4(mud::Gnode* parent, uint32_t resolution, float density, const char* save_path) {
		return &mud::gfx::lightmap(*parent, resolution, density, save_path);
	}
	// TonemapMode
	mud::TonemapMode DECL mud_TonemapMode_Linear() {
		return mud::TonemapMode::Linear;
	}
	mud::TonemapMode DECL mud_TonemapMode_Reinhardt() {
		return mud::TonemapMode::Reinhardt;
	}
	mud::TonemapMode DECL mud_TonemapMode_Filmic() {
		return mud::TonemapMode::Filmic;
	}
	mud::TonemapMode DECL mud_TonemapMode_ACES() {
		return mud::TonemapMode::ACES;
	}
	
}

