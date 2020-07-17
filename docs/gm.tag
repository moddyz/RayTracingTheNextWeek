<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile>
  <compound kind="file">
    <name>almost.h</name>
    <path>/code/GraphicsMath/src/gm/base/</path>
    <filename>almost_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN bool</type>
      <name>AlmostEqual</name>
      <anchorfile>almost_8h.html</anchorfile>
      <anchor>ab92154a7d8eb62f3c58898fd38ccf78d</anchor>
      <arglist>(const ValueT &amp;i_valueA, const ValueT &amp;i_valueB, const ValueT &amp;i_threshold=0.0001)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>assert.h</name>
    <path>/code/GraphicsMath/src/gm/base/</path>
    <filename>assert_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <member kind="define">
      <type>#define</type>
      <name>GM_ASSERT</name>
      <anchorfile>assert_8h.html</anchorfile>
      <anchor>aa57e12e37c87ab4e56f7757c5887d164</anchor>
      <arglist>(expr,...)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>GM_ASSERT_MSG</name>
      <anchorfile>assert_8h.html</anchorfile>
      <anchor>ae9bba774224ed5f43ebcd8390628b3a3</anchor>
      <arglist>(expr, format,...)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE void</type>
      <name>_Assert</name>
      <anchorfile>assert_8h.html</anchorfile>
      <anchor>a96aca25f799bea8622b89699d3800a5d</anchor>
      <arglist>(const char *i_expression, const char *i_file, size_t i_line)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>constants.h</name>
    <path>/code/GraphicsMath/src/gm/base/</path>
    <filename>constants_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
  </compound>
  <compound kind="file">
    <name>hostdevice.h</name>
    <path>/code/GraphicsMath/src/gm/base/</path>
    <filename>hostdevice_8h</filename>
    <member kind="define">
      <type>#define</type>
      <name>GM_HOST_DEVICE</name>
      <anchorfile>hostdevice_8h.html</anchorfile>
      <anchor>a7fca25929bf76aa6b8ef67bc293dfb10</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>log.h</name>
    <path>/code/GraphicsMath/src/gm/base/</path>
    <filename>log_8h</filename>
    <member kind="define">
      <type>#define</type>
      <name>GM_LOG_INFO</name>
      <anchorfile>log_8h.html</anchorfile>
      <anchor>a288b30d7dbadbbaaad698eecbe22fc1f</anchor>
      <arglist>(msgFormat,...)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>GM_LOG_WARN</name>
      <anchorfile>log_8h.html</anchorfile>
      <anchor>a90d23b21ebec31a3868a0fdfbe8a7f7a</anchor>
      <arglist>(msgFormat,...)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>GM_LOG_ERROR</name>
      <anchorfile>log_8h.html</anchorfile>
      <anchor>a14ca88ef9e60082e445944d55fa24a44</anchor>
      <arglist>(msgFormat,...)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>os.h</name>
    <path>/code/GraphicsMath/src/gm/base/</path>
    <filename>os_8h</filename>
  </compound>
  <compound kind="file">
    <name>abs.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>abs_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gad827ec71c006f0cbde5948befec32fc0</anchor>
      <arglist>(const float &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gafa1ca395966d21ae5f70faea6aec943a</anchor>
      <arglist>(const Vec2f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga078d3e3cd3da902cb2249f2566936313</anchor>
      <arglist>(const Vec3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga015c8bc1ec4a2671f970c71a970f3f38</anchor>
      <arglist>(const Vec4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga289ef924b28d093a7bfe52d47391dff1</anchor>
      <arglist>(const Mat3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae719e12185554586385d0da374324c71</anchor>
      <arglist>(const Mat4f &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>bilinearInterpolation.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>bilinearInterpolation_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="linearInterpolation_8h" name="linearInterpolation.h" local="no" imported="no">gm/functions/linearInterpolation.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gacbe3775d38660c7d91030cd48b6c7c25</anchor>
      <arglist>(const float &amp;i_value00, const float &amp;i_value01, const float &amp;i_value10, const float &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gacf417c22bd05e261e59e5bc8d15708ae</anchor>
      <arglist>(const Mat3f &amp;i_value00, const Mat3f &amp;i_value01, const Mat3f &amp;i_value10, const Mat3f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga0399fac7ef2b098f07c8861b1d49a0d3</anchor>
      <arglist>(const Mat4f &amp;i_value00, const Mat4f &amp;i_value01, const Mat4f &amp;i_value10, const Mat4f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga094bd25688e2b5b89ceb62f15eb8b62b</anchor>
      <arglist>(const Vec2f &amp;i_value00, const Vec2f &amp;i_value01, const Vec2f &amp;i_value10, const Vec2f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gab7364e0e9685b265474f49a039be8c7e</anchor>
      <arglist>(const Vec3f &amp;i_value00, const Vec3f &amp;i_value01, const Vec3f &amp;i_value10, const Vec3f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gab137654c95ce45cdadb03efb85071e36</anchor>
      <arglist>(const Vec4f &amp;i_value00, const Vec4f &amp;i_value01, const Vec4f &amp;i_value10, const Vec4f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ceil.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>ceil_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gad8fbe5e4b3940cac4c85de58284cf08c</anchor>
      <arglist>(const float &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga269a2604345a5241ab732e23e18b9d3e</anchor>
      <arglist>(const Vec2f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae5623eaf35e1e499a0e672484449bbdb</anchor>
      <arglist>(const Vec3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaec4169eaca08f6dd95714aeaf5a88b94</anchor>
      <arglist>(const Vec4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga585e1dd448234e5be6b3dd5e3a5de4b8</anchor>
      <arglist>(const Mat3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga60dc12236f92d64f2009c8cf37352624</anchor>
      <arglist>(const Mat4f &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>clamp.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>clamp_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="floatRange_8h" name="floatRange.h" local="no" imported="no">gm/types/floatRange.h</includes>
    <includes id="intRange_8h" name="intRange.h" local="no" imported="no">gm/types/intRange.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec2i_8h" name="vec2i.h" local="no" imported="no">gm/types/vec2i.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec3i_8h" name="vec3i.h" local="no" imported="no">gm/types/vec3i.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="vec4i_8h" name="vec4i.h" local="no" imported="no">gm/types/vec4i.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga5c89a065cd7ebd41c0d19ffc3002042e</anchor>
      <arglist>(const float &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga064a6c4d3494c2c951963d0468c8a9fa</anchor>
      <arglist>(const int &amp;i_value, const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga21fe6277b7df1ed38a172bae00595430</anchor>
      <arglist>(const Vec2f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf87cdc923c543b2c3eb22c30241b1411</anchor>
      <arglist>(const Vec3f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gacb2be337cb312d143496cd79e68da31b</anchor>
      <arglist>(const Vec4f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga739accba8a493aa8647d2202fa93ff10</anchor>
      <arglist>(const Vec2i &amp;i_value, const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf0d52468eb26dbc61c8b2a30a7f3cfb2</anchor>
      <arglist>(const Vec3i &amp;i_value, const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga2346a93e131bd30774d106e9a12124b1</anchor>
      <arglist>(const Vec4i &amp;i_value, const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga4daedb8da222e40d8156af73fc6f7951</anchor>
      <arglist>(const Mat3f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga8c764e5134bef4e42ac0c1e92af44ef4</anchor>
      <arglist>(const Mat4f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>contains.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>contains_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="floatRange_8h" name="floatRange.h" local="no" imported="no">gm/types/floatRange.h</includes>
    <includes id="intRange_8h" name="intRange.h" local="no" imported="no">gm/types/intRange.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec2fRange_8h" name="vec2fRange.h" local="no" imported="no">gm/types/vec2fRange.h</includes>
    <includes id="vec2i_8h" name="vec2i.h" local="no" imported="no">gm/types/vec2i.h</includes>
    <includes id="vec2iRange_8h" name="vec2iRange.h" local="no" imported="no">gm/types/vec2iRange.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec3fRange_8h" name="vec3fRange.h" local="no" imported="no">gm/types/vec3fRange.h</includes>
    <includes id="vec3i_8h" name="vec3i.h" local="no" imported="no">gm/types/vec3i.h</includes>
    <includes id="vec3iRange_8h" name="vec3iRange.h" local="no" imported="no">gm/types/vec3iRange.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="vec4fRange_8h" name="vec4fRange.h" local="no" imported="no">gm/types/vec4fRange.h</includes>
    <includes id="vec4i_8h" name="vec4i.h" local="no" imported="no">gm/types/vec4i.h</includes>
    <includes id="vec4iRange_8h" name="vec4iRange.h" local="no" imported="no">gm/types/vec4iRange.h</includes>
    <includes id="max_8h" name="max.h" local="no" imported="no">gm/functions/max.h</includes>
    <includes id="min_8h" name="min.h" local="no" imported="no">gm/functions/min.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>ab5c872cae848fbdd6b748d44cac92f9d</anchor>
      <arglist>(const FloatRange &amp;i_container, const float &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>ad6761b7c5824dff90512b46266a1d998</anchor>
      <arglist>(const FloatRange &amp;i_container, const FloatRange &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a213367f90e369ab9047a5084be715054</anchor>
      <arglist>(const IntRange &amp;i_container, const int &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a0e2638e14cb66aae1c28833cd0ca5ccc</anchor>
      <arglist>(const IntRange &amp;i_container, const IntRange &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>adcc7e336466ceac3c560f7c2609addc8</anchor>
      <arglist>(const Vec2fRange &amp;i_container, const Vec2f &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a27cc6e83031390d87a1924ffa840d33b</anchor>
      <arglist>(const Vec2fRange &amp;i_container, const Vec2fRange &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a7542a8f62dee24cb1a1e62a633d972f9</anchor>
      <arglist>(const Vec3fRange &amp;i_container, const Vec3f &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>aaac1b22621ca55b380fc7bf5481c93e6</anchor>
      <arglist>(const Vec3fRange &amp;i_container, const Vec3fRange &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a2d2e60e760048da02d761e7fd1027377</anchor>
      <arglist>(const Vec4fRange &amp;i_container, const Vec4f &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>ad28db981f54c867d1fafa256a8f83354</anchor>
      <arglist>(const Vec4fRange &amp;i_container, const Vec4fRange &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>aed20ec7997d72ff83c7b2734784e22d4</anchor>
      <arglist>(const Vec2iRange &amp;i_container, const Vec2i &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a40bb0a365bff547af7110fc43838bc78</anchor>
      <arglist>(const Vec2iRange &amp;i_container, const Vec2iRange &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a2fe75e6d96338bbfe8ab3e270185e66d</anchor>
      <arglist>(const Vec3iRange &amp;i_container, const Vec3i &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a5e8e97822c245a6bfdc939fa92ea2614</anchor>
      <arglist>(const Vec3iRange &amp;i_container, const Vec3iRange &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>aec1edef34b2e496c1f558378f4b125f2</anchor>
      <arglist>(const Vec4iRange &amp;i_container, const Vec4i &amp;i_containee)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Contains</name>
      <anchorfile>contains_8h.html</anchorfile>
      <anchor>a2b070803cd5d5a0ec31964aca079f8ae</anchor>
      <arglist>(const Vec4iRange &amp;i_container, const Vec4iRange &amp;i_containee)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>crossProduct.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>crossProduct_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Vec3f</type>
      <name>CrossProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga605cfdddf338ebc702bcbad54a5d7870</anchor>
      <arglist>(const Vec3f &amp;i_lhs, const Vec3f &amp;i_rhs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>degrees.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>degrees_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="constants_8h" name="constants.h" local="no" imported="no">gm/base/constants.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Degrees</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae87524da220700b948d8eb94a80f8f7b</anchor>
      <arglist>(const float &amp;i_angle)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>distance.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>distance_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="length_8h" name="length.h" local="no" imported="no">gm/functions/length.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Distance</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gaee62d995896999c4a6cd97015a30579d</anchor>
      <arglist>(const Vec2f &amp;i_pointA, const Vec2f &amp;i_pointB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Distance</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gae995ad3d66c992b9ef5a7f779d831642</anchor>
      <arglist>(const Vec3f &amp;i_pointA, const Vec3f &amp;i_pointB)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>dotProduct.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>dotProduct_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>DotProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga9077d7e36a0a6c80e6fea49ecf1b2e15</anchor>
      <arglist>(const Vec2f &amp;i_lhs, const Vec2f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>DotProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga1743d134c1ba7dbdf321e1f1bfe9c72c</anchor>
      <arglist>(const Vec3f &amp;i_lhs, const Vec3f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>DotProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga0996a12b60dccd8106518fd459d13cca</anchor>
      <arglist>(const Vec4f &amp;i_lhs, const Vec4f &amp;i_rhs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>expand.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>expand_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="floatRange_8h" name="floatRange.h" local="no" imported="no">gm/types/floatRange.h</includes>
    <includes id="intRange_8h" name="intRange.h" local="no" imported="no">gm/types/intRange.h</includes>
    <includes id="vec2fRange_8h" name="vec2fRange.h" local="no" imported="no">gm/types/vec2fRange.h</includes>
    <includes id="vec2iRange_8h" name="vec2iRange.h" local="no" imported="no">gm/types/vec2iRange.h</includes>
    <includes id="vec3fRange_8h" name="vec3fRange.h" local="no" imported="no">gm/types/vec3fRange.h</includes>
    <includes id="vec3iRange_8h" name="vec3iRange.h" local="no" imported="no">gm/types/vec3iRange.h</includes>
    <includes id="vec4fRange_8h" name="vec4fRange.h" local="no" imported="no">gm/types/vec4fRange.h</includes>
    <includes id="vec4iRange_8h" name="vec4iRange.h" local="no" imported="no">gm/types/vec4iRange.h</includes>
    <includes id="max_8h" name="max.h" local="no" imported="no">gm/functions/max.h</includes>
    <includes id="min_8h" name="min.h" local="no" imported="no">gm/functions/min.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE FloatRange</type>
      <name>Expand</name>
      <anchorfile>expand_8h.html</anchorfile>
      <anchor>abf2f6251402ea16f95fc85528692523f</anchor>
      <arglist>(const FloatRange &amp;i_lhs, const FloatRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE IntRange</type>
      <name>Expand</name>
      <anchorfile>expand_8h.html</anchorfile>
      <anchor>a84155534aeb2117b4e63fec24da1290e</anchor>
      <arglist>(const IntRange &amp;i_lhs, const IntRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2fRange</type>
      <name>Expand</name>
      <anchorfile>expand_8h.html</anchorfile>
      <anchor>a6c26ba4dded77190acea4d1526f2a6fe</anchor>
      <arglist>(const Vec2fRange &amp;i_lhs, const Vec2fRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3fRange</type>
      <name>Expand</name>
      <anchorfile>expand_8h.html</anchorfile>
      <anchor>a6cda7b9e081227e5ea2d9d6f04bbf8d5</anchor>
      <arglist>(const Vec3fRange &amp;i_lhs, const Vec3fRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4fRange</type>
      <name>Expand</name>
      <anchorfile>expand_8h.html</anchorfile>
      <anchor>a5513388630e0b786983e00758d20802e</anchor>
      <arglist>(const Vec4fRange &amp;i_lhs, const Vec4fRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2iRange</type>
      <name>Expand</name>
      <anchorfile>expand_8h.html</anchorfile>
      <anchor>a4577f0a4b5b2e413a81a81b0bdf13cf1</anchor>
      <arglist>(const Vec2iRange &amp;i_lhs, const Vec2iRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3iRange</type>
      <name>Expand</name>
      <anchorfile>expand_8h.html</anchorfile>
      <anchor>a18a7c98982723e033cefd85827b42631</anchor>
      <arglist>(const Vec3iRange &amp;i_lhs, const Vec3iRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4iRange</type>
      <name>Expand</name>
      <anchorfile>expand_8h.html</anchorfile>
      <anchor>a3614135507a11bf4e2b078109291f844</anchor>
      <arglist>(const Vec4iRange &amp;i_lhs, const Vec4iRange &amp;i_rhs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>floor.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>floor_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga5e31af7b97fb351a3cadf94d2538cecb</anchor>
      <arglist>(const float &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga99b6c7c86afe270bcdd49536026d8b2e</anchor>
      <arglist>(const Vec2f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf748f3cc6857f9ac830e444bca3a529c</anchor>
      <arglist>(const Vec3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga239b9168c5945bf5df987e503e8ff562</anchor>
      <arglist>(const Vec4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gac13c5744299061b948e10d00fe40bbe3</anchor>
      <arglist>(const Mat3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf73e888e47c977c95460b0c058b0c34a</anchor>
      <arglist>(const Mat4f &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>intersection.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>intersection_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="floatRange_8h" name="floatRange.h" local="no" imported="no">gm/types/floatRange.h</includes>
    <includes id="intRange_8h" name="intRange.h" local="no" imported="no">gm/types/intRange.h</includes>
    <includes id="vec2fRange_8h" name="vec2fRange.h" local="no" imported="no">gm/types/vec2fRange.h</includes>
    <includes id="vec2iRange_8h" name="vec2iRange.h" local="no" imported="no">gm/types/vec2iRange.h</includes>
    <includes id="vec3fRange_8h" name="vec3fRange.h" local="no" imported="no">gm/types/vec3fRange.h</includes>
    <includes id="vec3iRange_8h" name="vec3iRange.h" local="no" imported="no">gm/types/vec3iRange.h</includes>
    <includes id="vec4fRange_8h" name="vec4fRange.h" local="no" imported="no">gm/types/vec4fRange.h</includes>
    <includes id="vec4iRange_8h" name="vec4iRange.h" local="no" imported="no">gm/types/vec4iRange.h</includes>
    <includes id="max_8h" name="max.h" local="no" imported="no">gm/functions/max.h</includes>
    <includes id="min_8h" name="min.h" local="no" imported="no">gm/functions/min.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE FloatRange</type>
      <name>Intersection</name>
      <anchorfile>intersection_8h.html</anchorfile>
      <anchor>a4e6730c048899c7508d29b1116e666d2</anchor>
      <arglist>(const FloatRange &amp;i_lhs, const FloatRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE IntRange</type>
      <name>Intersection</name>
      <anchorfile>intersection_8h.html</anchorfile>
      <anchor>a9fc7cd65e67b2db4220329c1de8ac7ea</anchor>
      <arglist>(const IntRange &amp;i_lhs, const IntRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2fRange</type>
      <name>Intersection</name>
      <anchorfile>intersection_8h.html</anchorfile>
      <anchor>adf816c64bf42a306cb7da443b79c98a8</anchor>
      <arglist>(const Vec2fRange &amp;i_lhs, const Vec2fRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3fRange</type>
      <name>Intersection</name>
      <anchorfile>intersection_8h.html</anchorfile>
      <anchor>abc89aab11b0463972a02e9cc506421cf</anchor>
      <arglist>(const Vec3fRange &amp;i_lhs, const Vec3fRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4fRange</type>
      <name>Intersection</name>
      <anchorfile>intersection_8h.html</anchorfile>
      <anchor>a1b633eb67861ed49e31a3c15ae5b09af</anchor>
      <arglist>(const Vec4fRange &amp;i_lhs, const Vec4fRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2iRange</type>
      <name>Intersection</name>
      <anchorfile>intersection_8h.html</anchorfile>
      <anchor>a9596c0fd06581b9edc22a9ca0c7772d8</anchor>
      <arglist>(const Vec2iRange &amp;i_lhs, const Vec2iRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3iRange</type>
      <name>Intersection</name>
      <anchorfile>intersection_8h.html</anchorfile>
      <anchor>a719daae8c873b4223bf784be7b5001b5</anchor>
      <arglist>(const Vec3iRange &amp;i_lhs, const Vec3iRange &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4iRange</type>
      <name>Intersection</name>
      <anchorfile>intersection_8h.html</anchorfile>
      <anchor>afc8b4997fcb4bc94bed65726a5c76684</anchor>
      <arglist>(const Vec4iRange &amp;i_lhs, const Vec4iRange &amp;i_rhs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>isIdentity.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>isIdentity_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE bool</type>
      <name>IsIdentity</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga69dd4d7fc109962bc368b59e2c6c3463</anchor>
      <arglist>(const Mat3f &amp;i_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsIdentity</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gae9bf065d1c3574f7f13f787581fbb327</anchor>
      <arglist>(const Mat4f &amp;i_matrix)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>length.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>length_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="lengthSquared_8h" name="lengthSquared.h" local="no" imported="no">gm/functions/lengthSquared.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Length</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gae825111f1aec288c58b7f591e5f28550</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Length</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gaf4665ed9ce458687b4f37b51c4078e7b</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Length</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gae514c75c328a3b108c318edbe88b8a05</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>lengthSquared.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>lengthSquared_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="dotProduct_8h" name="dotProduct.h" local="no" imported="no">gm/functions/dotProduct.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>LengthSquared</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga3ac710c8671238bedf0874b8872ec9c8</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>LengthSquared</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gad6acf90cacc7350af1049a0d7986ad0e</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>LengthSquared</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga6f89cbf4ef1dbea9c41f55d603adb910</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>linearInterpolation.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>linearInterpolation_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga277d2156d5ef3de29f2ba6d14e3d0bf2</anchor>
      <arglist>(const float &amp;i_source, const float &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga18cff1ac7be5e714cb3bec000a23597e</anchor>
      <arglist>(const Mat3f &amp;i_source, const Mat3f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga2a4930dc49ff92002803e09977e7ea79</anchor>
      <arglist>(const Mat4f &amp;i_source, const Mat4f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae16b73ed33599600ce0f63609ea29280</anchor>
      <arglist>(const Vec2f &amp;i_source, const Vec2f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gad488515696b51df72e6fcabf184b668e</anchor>
      <arglist>(const Vec3f &amp;i_source, const Vec3f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gab7fb01b198f2b3a97ff16317f4137f00</anchor>
      <arglist>(const Vec4f &amp;i_source, const Vec4f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>linearMap.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>linearMap_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="floatRange_8h" name="floatRange.h" local="no" imported="no">gm/types/floatRange.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga5798f027478c55bade52df30921e7982</anchor>
      <arglist>(const float &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga263b14faec42590b79c9279ab3f1ad99</anchor>
      <arglist>(const Mat3f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga1eb7b9b44b3def2bcbc54ca6ec198b2b</anchor>
      <arglist>(const Mat4f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga5fcee0bde103f8a7f117a6a48c6a94c1</anchor>
      <arglist>(const Vec2f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae2b1e291707e7fcf0896da548ca64976</anchor>
      <arglist>(const Vec3f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga8128bd11dd098ac73ed334771d311fd1</anchor>
      <arglist>(const Vec4f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>matrixProduct.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>matrixProduct_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Mat3f</type>
      <name>MatrixProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gaaac175d07d5d746b0026abf1e0ee7ff5</anchor>
      <arglist>(const Mat3f &amp;i_lhs, const Mat3f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>MatrixProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga0f6997f60fdf86b7c30b63ebea631dca</anchor>
      <arglist>(const Mat4f &amp;i_lhs, const Mat4f &amp;i_rhs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>max_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec2i_8h" name="vec2i.h" local="no" imported="no">gm/types/vec2i.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec3i_8h" name="vec3i.h" local="no" imported="no">gm/types/vec3i.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="vec4i_8h" name="vec4i.h" local="no" imported="no">gm/types/vec4i.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga2a364cda3438d365813a492dc32b0e05</anchor>
      <arglist>(const float &amp;i_valueA, const float &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga3f9adcfcb5b71febd57d128a2f9fc403</anchor>
      <arglist>(const int &amp;i_valueA, const int &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gac0146a82cbe684277970b66b4d93eb95</anchor>
      <arglist>(const bool &amp;i_valueA, const bool &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gafcaaf999739ae884ea3cf09db485950a</anchor>
      <arglist>(const Vec2f &amp;i_valueA, const Vec2f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaa2c31474f80998fe6ef45b5dba2acad3</anchor>
      <arglist>(const Vec3f &amp;i_valueA, const Vec3f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga75fc404f3bda53ff0979360dbd11f913</anchor>
      <arglist>(const Vec4f &amp;i_valueA, const Vec4f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gabf288758eb7f67c2c01f981a63002b3c</anchor>
      <arglist>(const Vec2i &amp;i_valueA, const Vec2i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga34579418919333438588a6dc3cb6af84</anchor>
      <arglist>(const Vec3i &amp;i_valueA, const Vec3i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gacdf209f13f239dc9cb70c1b0daccf0ec</anchor>
      <arglist>(const Vec4i &amp;i_valueA, const Vec4i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga0436a40f59c6554a15ce898dc5cf84e5</anchor>
      <arglist>(const Mat3f &amp;i_valueA, const Mat3f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga37f840849efe9615964bc32429ca20cd</anchor>
      <arglist>(const Mat4f &amp;i_valueA, const Mat4f &amp;i_valueB)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>min_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec2i_8h" name="vec2i.h" local="no" imported="no">gm/types/vec2i.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec3i_8h" name="vec3i.h" local="no" imported="no">gm/types/vec3i.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="vec4i_8h" name="vec4i.h" local="no" imported="no">gm/types/vec4i.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaa90692ab90b72fa1054397fe67d72067</anchor>
      <arglist>(const float &amp;i_valueA, const float &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga4bc37868a32070cf03f0200f8dc828f8</anchor>
      <arglist>(const int &amp;i_valueA, const int &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga2679967ee89033f83535e432f07eb5c7</anchor>
      <arglist>(const bool &amp;i_valueA, const bool &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga6ba902a5b7fc29023994d58f6d3f2ea5</anchor>
      <arglist>(const Vec2f &amp;i_valueA, const Vec2f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga90f0be2c2a7a87feeec5b16a138cf3c3</anchor>
      <arglist>(const Vec3f &amp;i_valueA, const Vec3f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga9b4635e8a404a751dceab5210aac228f</anchor>
      <arglist>(const Vec4f &amp;i_valueA, const Vec4f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaa9417507b451fc70c931afd47bb5c0d4</anchor>
      <arglist>(const Vec2i &amp;i_valueA, const Vec2i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae984ff94dfb87cc3eaf1ae74ffe9ca39</anchor>
      <arglist>(const Vec3i &amp;i_valueA, const Vec3i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga3bd1a731ef51e958386b599f1444a10d</anchor>
      <arglist>(const Vec4i &amp;i_valueA, const Vec4i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae2aa7be7bdd849d6b0cb46c67d23ef93</anchor>
      <arglist>(const Mat3f &amp;i_valueA, const Mat3f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga76a28039482e67f63bbe2400f7b48858</anchor>
      <arglist>(const Mat4f &amp;i_valueA, const Mat4f &amp;i_valueB)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>normalize.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>normalize_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <includes id="length_8h" name="length.h" local="no" imported="no">gm/functions/length.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Vec2f</type>
      <name>Normalize</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga244920ba03e49ea95897a37bb2a343aa</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Normalize</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga1b576339cd0f19ee2470c0199bee2f26</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Normalize</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga2542196162e259d4a3af7428f928c3dc</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>quadraticRoots.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>quadraticRoots_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE int</type>
      <name>QuadraticRoots</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gade1119e898f0c8fd283d3aa7a215a69d</anchor>
      <arglist>(const float &amp;i_a, const float &amp;i_b, const float &amp;i_c, Vec2f &amp;o_roots)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>radians.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>radians_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="constants_8h" name="constants.h" local="no" imported="no">gm/base/constants.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Radians</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga126ab9894d7a876e65510ee740f31a30</anchor>
      <arglist>(const float &amp;i_angle)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>randomNumber.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>randomNumber_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <includes id="floatRange_8h" name="floatRange.h" local="no" imported="no">gm/types/floatRange.h</includes>
    <includes id="intRange_8h" name="intRange.h" local="no" imported="no">gm/types/intRange.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>RandomNumber</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae1aca95f8806f8d9c854e90c5ee1e213</anchor>
      <arglist>(const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>RandomNumber</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaaa6843bdd825058465b7c0784a73c402</anchor>
      <arglist>(const IntRange &amp;i_range)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rayAABBIntersection.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>rayAABBIntersection_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="floatRange_8h" name="floatRange.h" local="no" imported="no">gm/types/floatRange.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec2fRange_8h" name="vec2fRange.h" local="no" imported="no">gm/types/vec2fRange.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec3fRange_8h" name="vec3fRange.h" local="no" imported="no">gm/types/vec3fRange.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="vec4fRange_8h" name="vec4fRange.h" local="no" imported="no">gm/types/vec4fRange.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <includes id="intersection_8h" name="intersection.h" local="no" imported="no">gm/functions/intersection.h</includes>
    <includes id="max_8h" name="max.h" local="no" imported="no">gm/functions/max.h</includes>
    <includes id="min_8h" name="min.h" local="no" imported="no">gm/functions/min.h</includes>
    <includes id="rayPosition_8h" name="rayPosition.h" local="no" imported="no">gm/functions/rayPosition.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE bool</type>
      <name>RayAABBIntersection</name>
      <anchorfile>rayAABBIntersection_8h.html</anchorfile>
      <anchor>a4bf7c8313c46b9cbf21d6cf73f9995d0</anchor>
      <arglist>(const Vec2f &amp;i_rayOrigin, const Vec2f &amp;i_rayDirection, const Vec2fRange &amp;i_aabb, FloatRange &amp;o_intersections)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>RayAABBIntersection</name>
      <anchorfile>rayAABBIntersection_8h.html</anchorfile>
      <anchor>a09e1def07915702f638b593c712ffd7e</anchor>
      <arglist>(const Vec3f &amp;i_rayOrigin, const Vec3f &amp;i_rayDirection, const Vec3fRange &amp;i_aabb, FloatRange &amp;o_intersections)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>RayAABBIntersection</name>
      <anchorfile>rayAABBIntersection_8h.html</anchorfile>
      <anchor>a29f5a4d92836447265533f5f8a933108</anchor>
      <arglist>(const Vec4f &amp;i_rayOrigin, const Vec4f &amp;i_rayDirection, const Vec4fRange &amp;i_aabb, FloatRange &amp;o_intersections)</arglist>
    </member>
    <docanchor file="rayAABBIntersection_8h" title="Solving Ray AABB intersection in one dimension">gm_section_rayABBIntersection1DProof</docanchor>
    <docanchor file="rayAABBIntersection_8h" title="Solving Ray AABB intersection in N dimensions">gm_section_rayABBIntersectionExtension</docanchor>
  </compound>
  <compound kind="file">
    <name>rayPosition.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>rayPosition_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <includes id="length_8h" name="length.h" local="no" imported="no">gm/functions/length.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Vec2f</type>
      <name>RayPosition</name>
      <anchorfile>group__gm__functions__rayTracing.html</anchorfile>
      <anchor>gaab09e1c444961ebfd12582b9caa0df4f</anchor>
      <arglist>(const Vec2f &amp;i_origin, const Vec2f &amp;i_direction, const float &amp;i_magnitude)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>RayPosition</name>
      <anchorfile>group__gm__functions__rayTracing.html</anchorfile>
      <anchor>gaf4098439683fd8ee6134439c1e37486b</anchor>
      <arglist>(const Vec3f &amp;i_origin, const Vec3f &amp;i_direction, const float &amp;i_magnitude)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>raySphereIntersection.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>raySphereIntersection_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="floatRange_8h" name="floatRange.h" local="no" imported="no">gm/types/floatRange.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <includes id="dotProduct_8h" name="dotProduct.h" local="no" imported="no">gm/functions/dotProduct.h</includes>
    <includes id="quadraticRoots_8h" name="quadraticRoots.h" local="no" imported="no">gm/functions/quadraticRoots.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE int</type>
      <name>RaySphereIntersection</name>
      <anchorfile>group__gm__functions__rayTracing.html</anchorfile>
      <anchor>gaa14388e5cbb2f41e4efb04b01c77b1b6</anchor>
      <arglist>(const Vec3f &amp;i_sphereOrigin, const float &amp;i_sphereRadius, const Vec3f &amp;i_rayOrigin, const Vec3f &amp;i_rayDirection, FloatRange &amp;o_intersections)</arglist>
    </member>
    <docanchor file="raySphereIntersection_8h" title="Analytic proof of Ray Sphere Intersection">GM_section_raySphereIntersectionAnalyticProof</docanchor>
  </compound>
  <compound kind="file">
    <name>setIdentity.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>setIdentity_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE void</type>
      <name>SetIdentity</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga624e672e84b35e2e58504e9c9ca83567</anchor>
      <arglist>(Mat3f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE void</type>
      <name>SetIdentity</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga60f6071b88a0c4dd92133901a7d640f6</anchor>
      <arglist>(Mat4f &amp;o_matrix)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>setScale.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>setScale_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE void</type>
      <name>SetScale</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga5dae65aada891685f50d2d15eb2aa2ce</anchor>
      <arglist>(const Vec2f &amp;i_vector, Mat3f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE void</type>
      <name>SetScale</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gaa33e6fc7dc2f7e2a30bbb04ef24763fa</anchor>
      <arglist>(const Vec3f &amp;i_vector, Mat4f &amp;o_matrix)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>setTranslate.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>setTranslate_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE void</type>
      <name>SetTranslate</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gac4bfbcbe26d914f674c4e001d71f880d</anchor>
      <arglist>(const Vec2f &amp;i_vector, Mat3f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE void</type>
      <name>SetTranslate</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gac05924df74e9de3ecbcfe319524ebd68</anchor>
      <arglist>(const Vec3f &amp;i_vector, Mat4f &amp;o_matrix)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>transpose.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>transpose_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Mat3f</type>
      <name>Transpose</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga462f9178bf3925bfa5036b340ce2faf0</anchor>
      <arglist>(const Mat3f &amp;i_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Transpose</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gad55b59e446f98ba38970449b3e354421</anchor>
      <arglist>(const Mat4f &amp;i_matrix)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>trilinearInterpolation.h</name>
    <path>/code/GraphicsMath/src/gm/functions/</path>
    <filename>trilinearInterpolation_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="bilinearInterpolation_8h" name="bilinearInterpolation.h" local="no" imported="no">gm/functions/bilinearInterpolation.h</includes>
    <includes id="linearInterpolation_8h" name="linearInterpolation.h" local="no" imported="no">gm/functions/linearInterpolation.h</includes>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga703a230714ee24957be6f2da5a8d97ec</anchor>
      <arglist>(const float &amp;i_value000, const float &amp;i_value001, const float &amp;i_value010, const float &amp;i_value011, const float &amp;i_value100, const float &amp;i_value101, const float &amp;i_value110, const float &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga358d57a0afd184096466b664330cdc6f</anchor>
      <arglist>(const Mat3f &amp;i_value000, const Mat3f &amp;i_value001, const Mat3f &amp;i_value010, const Mat3f &amp;i_value011, const Mat3f &amp;i_value100, const Mat3f &amp;i_value101, const Mat3f &amp;i_value110, const Mat3f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaed2a655f8192c2c9ba01e8781299facd</anchor>
      <arglist>(const Mat4f &amp;i_value000, const Mat4f &amp;i_value001, const Mat4f &amp;i_value010, const Mat4f &amp;i_value011, const Mat4f &amp;i_value100, const Mat4f &amp;i_value101, const Mat4f &amp;i_value110, const Mat4f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gab5c817c64bea40996a9ad04a80d2124c</anchor>
      <arglist>(const Vec2f &amp;i_value000, const Vec2f &amp;i_value001, const Vec2f &amp;i_value010, const Vec2f &amp;i_value011, const Vec2f &amp;i_value100, const Vec2f &amp;i_value101, const Vec2f &amp;i_value110, const Vec2f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf34a3e36b8246f7ae898c55a4ecf3389</anchor>
      <arglist>(const Vec3f &amp;i_value000, const Vec3f &amp;i_value001, const Vec3f &amp;i_value010, const Vec3f &amp;i_value011, const Vec3f &amp;i_value100, const Vec3f &amp;i_value101, const Vec3f &amp;i_value110, const Vec3f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf9244a8f16943e49287a57299bd57374</anchor>
      <arglist>(const Vec4f &amp;i_value000, const Vec4f &amp;i_value001, const Vec4f &amp;i_value010, const Vec4f &amp;i_value011, const Vec4f &amp;i_value100, const Vec4f &amp;i_value101, const Vec4f &amp;i_value110, const Vec4f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>gm.h</name>
    <path>/code/GraphicsMath/src/gm/</path>
    <filename>gm_8h</filename>
    <includes id="hostdevice_8h" name="hostdevice.h" local="no" imported="no">gm/base/hostdevice.h</includes>
    <member kind="define">
      <type>#define</type>
      <name>GM_NS</name>
      <anchorfile>gm_8h.html</anchorfile>
      <anchor>ab87d0c71161137eb5a7df9ba9e6e3632</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>GM_NS_USING</name>
      <anchorfile>gm_8h.html</anchorfile>
      <anchor>a6cfc19b65db7b0f36362dfa3b85f7852</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>GM_NS_OPEN</name>
      <anchorfile>gm_8h.html</anchorfile>
      <anchor>a22ad8a4eb0ec100618321cb6bbed27fa</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>GM_NS_CLOSE</name>
      <anchorfile>gm_8h.html</anchorfile>
      <anchor>a3388432345a2ffab3208f5acad2671bb</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>boolArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>boolArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
  </compound>
  <compound kind="file">
    <name>floatArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>floatArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
  </compound>
  <compound kind="file">
    <name>floatRange.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>floatRange_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <class kind="class">FloatRange</class>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>floatRange_8h.html</anchorfile>
      <anchor>ae814392fa809b3d1a73ebe008291db67</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const FloatRange &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>intArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>intArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
  </compound>
  <compound kind="file">
    <name>intRange.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>intRange_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <class kind="class">IntRange</class>
    <class kind="class">IntRange::iterator</class>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>intRange_8h.html</anchorfile>
      <anchor>a1189ce35c62adca5e3762beb7c99d914</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const IntRange &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>mat3f.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>mat3f_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <class kind="class">Mat3f</class>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator*</name>
      <anchorfile>mat3f_8h.html</anchorfile>
      <anchor>a1132a6c0a0a0a4bf950ae82560b20d2f</anchor>
      <arglist>(const Mat3f &amp;i_vector, const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator*</name>
      <anchorfile>mat3f_8h.html</anchorfile>
      <anchor>a8de06330a91eba83f56b6705821ce28f</anchor>
      <arglist>(const float &amp;i_scalar, const Mat3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>mat3f_8h.html</anchorfile>
      <anchor>aaf5d96ee0a8af10221b7e62b36c98139</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Mat3f &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>mat3fArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>mat3fArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat3f_8h" name="mat3f.h" local="no" imported="no">gm/types/mat3f.h</includes>
  </compound>
  <compound kind="file">
    <name>mat4f.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>mat4f_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <class kind="class">Mat4f</class>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator*</name>
      <anchorfile>mat4f_8h.html</anchorfile>
      <anchor>aaadf3b8f7fe8876ff8136ba5df1787f2</anchor>
      <arglist>(const Mat4f &amp;i_vector, const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator*</name>
      <anchorfile>mat4f_8h.html</anchorfile>
      <anchor>adafd2f1f172b493e342f3f19ebd6842a</anchor>
      <arglist>(const float &amp;i_scalar, const Mat4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>mat4f_8h.html</anchorfile>
      <anchor>add46c868950f01ce2c43e838f7b87b28</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Mat4f &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>mat4fArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>mat4fArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="mat4f_8h" name="mat4f.h" local="no" imported="no">gm/types/mat4f.h</includes>
  </compound>
  <compound kind="file">
    <name>vec2f.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec2f_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <class kind="class">Vec2f</class>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator*</name>
      <anchorfile>vec2f_8h.html</anchorfile>
      <anchor>a55aa592045561906dce31e48f020abfa</anchor>
      <arglist>(const Vec2f &amp;i_vector, const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator*</name>
      <anchorfile>vec2f_8h.html</anchorfile>
      <anchor>a6339d036caf2dca81492ffff69f64795</anchor>
      <arglist>(const float &amp;i_scalar, const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec2f_8h.html</anchorfile>
      <anchor>a8744abc90875f2b7e8c1249cdd827282</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec2f &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec2fArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec2fArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
  </compound>
  <compound kind="file">
    <name>vec2fRange.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec2fRange_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2f_8h" name="vec2f.h" local="no" imported="no">gm/types/vec2f.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <class kind="class">Vec2fRange</class>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec2fRange_8h.html</anchorfile>
      <anchor>a89d11d77c206d0e88772c2d0e12356f8</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec2fRange &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec2i.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec2i_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <class kind="class">Vec2i</class>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator*</name>
      <anchorfile>vec2i_8h.html</anchorfile>
      <anchor>a895c0f9fb60fb578c2d71d939daa58f8</anchor>
      <arglist>(const Vec2i &amp;i_vector, const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator*</name>
      <anchorfile>vec2i_8h.html</anchorfile>
      <anchor>a3af0c660d83b536e75644f15222c6217</anchor>
      <arglist>(const int &amp;i_scalar, const Vec2i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec2i_8h.html</anchorfile>
      <anchor>ae9747f5df080a2fdaad20bf99b28ac73</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec2i &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec2iArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec2iArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2i_8h" name="vec2i.h" local="no" imported="no">gm/types/vec2i.h</includes>
  </compound>
  <compound kind="file">
    <name>vec2iRange.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec2iRange_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec2i_8h" name="vec2i.h" local="no" imported="no">gm/types/vec2i.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <class kind="class">Vec2iRange</class>
    <class kind="class">Vec2iRange::iterator</class>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec2iRange_8h.html</anchorfile>
      <anchor>ae3b2243a761ac1d29605bee345735613</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec2iRange &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec3f.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec3f_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <class kind="class">Vec3f</class>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator*</name>
      <anchorfile>vec3f_8h.html</anchorfile>
      <anchor>abf4e185a3f40a1a3df2e370146e7a434</anchor>
      <arglist>(const Vec3f &amp;i_vector, const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator*</name>
      <anchorfile>vec3f_8h.html</anchorfile>
      <anchor>ae0a6ded09078b49561b27d89e238d2f5</anchor>
      <arglist>(const float &amp;i_scalar, const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec3f_8h.html</anchorfile>
      <anchor>ae70418505d4ab39ca2cee21c67afdbe1</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec3f &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec3fArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec3fArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
  </compound>
  <compound kind="file">
    <name>vec3fRange.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec3fRange_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec3f_8h" name="vec3f.h" local="no" imported="no">gm/types/vec3f.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <class kind="class">Vec3fRange</class>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec3fRange_8h.html</anchorfile>
      <anchor>a7d2b7720cfc15c71db13ef46a894fc7e</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec3fRange &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec3i.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec3i_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <class kind="class">Vec3i</class>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator*</name>
      <anchorfile>vec3i_8h.html</anchorfile>
      <anchor>a079511ae87fd361162090a0f217a0ea5</anchor>
      <arglist>(const Vec3i &amp;i_vector, const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator*</name>
      <anchorfile>vec3i_8h.html</anchorfile>
      <anchor>a056ac366a43b268babda66694513ecfd</anchor>
      <arglist>(const int &amp;i_scalar, const Vec3i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec3i_8h.html</anchorfile>
      <anchor>a4d3d166b73f2962d6fb69d418cb61bf7</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec3i &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec3iArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec3iArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec3i_8h" name="vec3i.h" local="no" imported="no">gm/types/vec3i.h</includes>
  </compound>
  <compound kind="file">
    <name>vec3iRange.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec3iRange_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec3i_8h" name="vec3i.h" local="no" imported="no">gm/types/vec3i.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <class kind="class">Vec3iRange</class>
    <class kind="class">Vec3iRange::iterator</class>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec3iRange_8h.html</anchorfile>
      <anchor>a3ffc772984e9a125f4f5fb953a4f3d46</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec3iRange &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec4f.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec4f_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <class kind="class">Vec4f</class>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator*</name>
      <anchorfile>vec4f_8h.html</anchorfile>
      <anchor>aea0e9bdf3b1e56f272ed98781db699f3</anchor>
      <arglist>(const Vec4f &amp;i_vector, const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator*</name>
      <anchorfile>vec4f_8h.html</anchorfile>
      <anchor>a04360662a9755b84d4cba9d93a31cc54</anchor>
      <arglist>(const float &amp;i_scalar, const Vec4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec4f_8h.html</anchorfile>
      <anchor>aab54b462bad7d898ecf60e18269e7c90</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec4f &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec4fArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec4fArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
  </compound>
  <compound kind="file">
    <name>vec4fRange.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec4fRange_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec4f_8h" name="vec4f.h" local="no" imported="no">gm/types/vec4f.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <class kind="class">Vec4fRange</class>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec4fRange_8h.html</anchorfile>
      <anchor>a42abab2cf8f5b6d477e1c5788c5a5b8d</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec4fRange &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec4i.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec4i_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="assert_8h" name="assert.h" local="no" imported="no">gm/base/assert.h</includes>
    <class kind="class">Vec4i</class>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator*</name>
      <anchorfile>vec4i_8h.html</anchorfile>
      <anchor>a587fee75afb097edc9a1239a062e2ea9</anchor>
      <arglist>(const Vec4i &amp;i_vector, const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator*</name>
      <anchorfile>vec4i_8h.html</anchorfile>
      <anchor>a1587869e94978c2e08d55948cbcf32de</anchor>
      <arglist>(const int &amp;i_scalar, const Vec4i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec4i_8h.html</anchorfile>
      <anchor>a78bc4a487c1c96880f322646158f2210</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec4i &amp;i_vector)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>vec4iArray.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec4iArray_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec4i_8h" name="vec4i.h" local="no" imported="no">gm/types/vec4i.h</includes>
  </compound>
  <compound kind="file">
    <name>vec4iRange.h</name>
    <path>/code/GraphicsMath/src/gm/types/</path>
    <filename>vec4iRange_8h</filename>
    <includes id="gm_8h" name="gm.h" local="no" imported="no">gm/gm.h</includes>
    <includes id="vec4i_8h" name="vec4i.h" local="no" imported="no">gm/types/vec4i.h</includes>
    <includes id="almost_8h" name="almost.h" local="no" imported="no">gm/base/almost.h</includes>
    <class kind="class">Vec4iRange</class>
    <class kind="class">Vec4iRange::iterator</class>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>vec4iRange_8h.html</anchorfile>
      <anchor>a819e34b93830d62af563efb24972c6f1</anchor>
      <arglist>(std::ostream &amp;o_outputStream, const Vec4iRange &amp;i_value)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>FloatRange</name>
    <filename>classFloatRange.html</filename>
    <member kind="typedef">
      <type>float</type>
      <name>ValueType</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>a1a70e96f390c991c1676e7b7ed933153</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>FloatRange</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>adcc4a3535059e90f8dd6e42e40acccad</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>FloatRange</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>a534f3b3d39c17032a2a47faf1494e0e7</anchor>
      <arglist>(const float &amp;i_min, const float &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>Min</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>a0bfc7bfa82e1601f1027fc416bb83d31</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>Min</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>ae8b436ebb23fe2ab7c622a37dc01408a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>Max</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>abb57ed322ea0431392aa8c0e704979c7</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>Max</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>ae647942e0aeeea4b2db8a2af6ad87368</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>ae3c960aa2c7699c6d0da1470254f5149</anchor>
      <arglist>(const FloatRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>a0a9a58f7ef0d0c431153880385d2ae5f</anchor>
      <arglist>(const FloatRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>aeaa530954511846098568f8188864d84</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>FloatRange</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>adcc4a3535059e90f8dd6e42e40acccad</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>FloatRange</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>a534f3b3d39c17032a2a47faf1494e0e7</anchor>
      <arglist>(const float &amp;i_min, const float &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>Min</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>a0bfc7bfa82e1601f1027fc416bb83d31</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>Min</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>ae8b436ebb23fe2ab7c622a37dc01408a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>Max</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>abb57ed322ea0431392aa8c0e704979c7</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>Max</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>ae647942e0aeeea4b2db8a2af6ad87368</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>ae3c960aa2c7699c6d0da1470254f5149</anchor>
      <arglist>(const FloatRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>a0a9a58f7ef0d0c431153880385d2ae5f</anchor>
      <arglist>(const FloatRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>aeaa530954511846098568f8188864d84</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>aa50351b449b166044a8aaa7d48db02b5</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classFloatRange.html</anchorfile>
      <anchor>af60eba53218792d75280997798bcf37d</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>IntRange</name>
    <filename>classIntRange.html</filename>
    <class kind="class">IntRange::iterator</class>
    <member kind="typedef">
      <type>int</type>
      <name>ValueType</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>ab3e2322254e782a02de1467b179aa5ca</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>IntRange</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a09c7674de23d26b439854e18d259318a</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>IntRange</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a9871fc0999bba9c5367fc11c47336b2c</anchor>
      <arglist>(const int &amp;i_min, const int &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>Min</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>ab5beb1191f0fb828d7d376c2324a8006</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>Min</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a670417246223f6726543a53f7664d6af</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>Max</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a1644ec6966b5aef1fc0f5cbae6782e05</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>Max</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a4f6049747974140bfe11e4e3991a6a70</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>af770bf8440706dd9854b6a5be7c450ad</anchor>
      <arglist>(const IntRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>ac4f11ab9f130848db7255917a47fb138</anchor>
      <arglist>(const IntRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a12d27a9a0f1b6083639182ca50e84529</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>begin</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a07a1d29679cd132cff76f7d7ffc7f626</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>end</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>ac9aef000e102788a455061bfc0d6f119</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>IntRange</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a09c7674de23d26b439854e18d259318a</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>IntRange</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a9871fc0999bba9c5367fc11c47336b2c</anchor>
      <arglist>(const int &amp;i_min, const int &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>Min</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>ab5beb1191f0fb828d7d376c2324a8006</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>Min</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a670417246223f6726543a53f7664d6af</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>Max</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a1644ec6966b5aef1fc0f5cbae6782e05</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>Max</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a4f6049747974140bfe11e4e3991a6a70</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>af770bf8440706dd9854b6a5be7c450ad</anchor>
      <arglist>(const IntRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>ac4f11ab9f130848db7255917a47fb138</anchor>
      <arglist>(const IntRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a12d27a9a0f1b6083639182ca50e84529</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>begin</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a07a1d29679cd132cff76f7d7ffc7f626</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>end</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>ac9aef000e102788a455061bfc0d6f119</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>a1a68ac9f2b67de27f4ef462e77fda168</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classIntRange.html</anchorfile>
      <anchor>ab87e2e2171e69d64339762bba10b1d36</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec2iRange::iterator</name>
    <filename>classVec2iRange_1_1iterator.html</filename>
    <member kind="function">
      <type></type>
      <name>iterator</name>
      <anchorfile>classVec2iRange_1_1iterator.html</anchorfile>
      <anchor>a1bae0f0737fba508b0fc064cc981db6e</anchor>
      <arglist>(const Vec2i &amp;i_current, const Vec2i &amp;i_min, const Vec2i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2iRange_1_1iterator.html</anchorfile>
      <anchor>ae6cb1160eab647fec8176a310b5dc538</anchor>
      <arglist>(const iterator &amp;i_other) const</arglist>
    </member>
    <member kind="function">
      <type>const Vec2i &amp;</type>
      <name>operator*</name>
      <anchorfile>classVec2iRange_1_1iterator.html</anchorfile>
      <anchor>a0d5986837ab1aa88536d2ceb9af525a0</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>const iterator &amp;</type>
      <name>operator++</name>
      <anchorfile>classVec2iRange_1_1iterator.html</anchorfile>
      <anchor>a199a6333b573e66a0bf49273479b1974</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec4iRange::iterator</name>
    <filename>classVec4iRange_1_1iterator.html</filename>
    <member kind="function">
      <type></type>
      <name>iterator</name>
      <anchorfile>classVec4iRange_1_1iterator.html</anchorfile>
      <anchor>a70ee3e27cd1721415dd7119b3a64b04c</anchor>
      <arglist>(const Vec4i &amp;i_current, const Vec4i &amp;i_min, const Vec4i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4iRange_1_1iterator.html</anchorfile>
      <anchor>abbaff64a135664abd441a4ee747b30a6</anchor>
      <arglist>(const iterator &amp;i_other) const</arglist>
    </member>
    <member kind="function">
      <type>const Vec4i &amp;</type>
      <name>operator*</name>
      <anchorfile>classVec4iRange_1_1iterator.html</anchorfile>
      <anchor>a68b3832cf8bef2506e9517f21d96504e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>const iterator &amp;</type>
      <name>operator++</name>
      <anchorfile>classVec4iRange_1_1iterator.html</anchorfile>
      <anchor>a3d5667706caa2a2c4e2b3dc7913083b3</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>IntRange::iterator</name>
    <filename>classIntRange_1_1iterator.html</filename>
    <member kind="function">
      <type></type>
      <name>iterator</name>
      <anchorfile>classIntRange_1_1iterator.html</anchorfile>
      <anchor>aa8171540f9424ceb87bdd9d1d5554e25</anchor>
      <arglist>(const int &amp;i_current)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator!=</name>
      <anchorfile>classIntRange_1_1iterator.html</anchorfile>
      <anchor>ad0691d508704e88b42b1feebb2b70cbf</anchor>
      <arglist>(const iterator &amp;i_other) const</arglist>
    </member>
    <member kind="function">
      <type>const int &amp;</type>
      <name>operator*</name>
      <anchorfile>classIntRange_1_1iterator.html</anchorfile>
      <anchor>a6c3d900e7b83b51be2e8f4e510c79e18</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>const iterator &amp;</type>
      <name>operator++</name>
      <anchorfile>classIntRange_1_1iterator.html</anchorfile>
      <anchor>a3106ed723f1c7bb6ef7d5dd774281c97</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec3iRange::iterator</name>
    <filename>classVec3iRange_1_1iterator.html</filename>
    <member kind="function">
      <type></type>
      <name>iterator</name>
      <anchorfile>classVec3iRange_1_1iterator.html</anchorfile>
      <anchor>a06d15901c762194e9b6bf4e4b91bca79</anchor>
      <arglist>(const Vec3i &amp;i_current, const Vec3i &amp;i_min, const Vec3i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3iRange_1_1iterator.html</anchorfile>
      <anchor>ab6e33ae618faf06600a990d12b456871</anchor>
      <arglist>(const iterator &amp;i_other) const</arglist>
    </member>
    <member kind="function">
      <type>const Vec3i &amp;</type>
      <name>operator*</name>
      <anchorfile>classVec3iRange_1_1iterator.html</anchorfile>
      <anchor>ad4d468b3ea599698f77c9010214b9278</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>const iterator &amp;</type>
      <name>operator++</name>
      <anchorfile>classVec3iRange_1_1iterator.html</anchorfile>
      <anchor>a2c750f8aa1d5663232d499d690e3c0d4</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Mat3f</name>
    <filename>classMat3f.html</filename>
    <member kind="typedef">
      <type>float</type>
      <name>ElementType</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>ad5c0bf0301fbdd541b5930aadafa2523</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Mat3f</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a0164b1e1962fe798338ef6d0c8ffcd96</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Mat3f</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a57a739cacc9af914ac18e6c077bfbfdb</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1, const float &amp;i_element2, const float &amp;i_element3, const float &amp;i_element4, const float &amp;i_element5, const float &amp;i_element6, const float &amp;i_element7, const float &amp;i_element8)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>ad72c0b10d3c040d4304b152dbfc54a1a</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a7043bfcab941678fae317eb2eab3439c</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator()</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a65b2c60894ac10b266c5ca13ee7f67c4</anchor>
      <arglist>(size_t i_row, size_t i_column) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator()</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a5b3dcb1e186b2586e0d323b5f6dc374d</anchor>
      <arglist>(size_t i_row, size_t i_column)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator+</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a946049e38101edd00f0d368fc2aed7e9</anchor>
      <arglist>(const Mat3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a7560aefc60e44e291e1a235fc8270362</anchor>
      <arglist>(const Mat3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator-</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a649cef58653dbd31dd5490ca10617a2c</anchor>
      <arglist>(const Mat3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a8d4bb046f3cd64c127db110c75990db0</anchor>
      <arglist>(const Mat3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a17fdae18c0d7bffe2405b40c397fc996</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator/</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a5f3350f826af038ae6cf388457cec8a9</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a5fc69f030b7ff9d13afd8d6969ea0ce4</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator-</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>aede00a1903e2060d6782f6061663949d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>afe97062349df5c58de441ffd8e21f910</anchor>
      <arglist>(const Mat3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a7f206087be32b28568a4a699716ee74c</anchor>
      <arglist>(const Mat3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a5d8184989655dee3a3081b2c4699e830</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Mat3f</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a0164b1e1962fe798338ef6d0c8ffcd96</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Mat3f</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a57a739cacc9af914ac18e6c077bfbfdb</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1, const float &amp;i_element2, const float &amp;i_element3, const float &amp;i_element4, const float &amp;i_element5, const float &amp;i_element6, const float &amp;i_element7, const float &amp;i_element8)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>ad72c0b10d3c040d4304b152dbfc54a1a</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a7043bfcab941678fae317eb2eab3439c</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator()</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a65b2c60894ac10b266c5ca13ee7f67c4</anchor>
      <arglist>(size_t i_row, size_t i_column) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator()</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a5b3dcb1e186b2586e0d323b5f6dc374d</anchor>
      <arglist>(size_t i_row, size_t i_column)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator+</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a946049e38101edd00f0d368fc2aed7e9</anchor>
      <arglist>(const Mat3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a7560aefc60e44e291e1a235fc8270362</anchor>
      <arglist>(const Mat3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator-</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a649cef58653dbd31dd5490ca10617a2c</anchor>
      <arglist>(const Mat3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a8d4bb046f3cd64c127db110c75990db0</anchor>
      <arglist>(const Mat3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a17fdae18c0d7bffe2405b40c397fc996</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator/</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a5f3350f826af038ae6cf388457cec8a9</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a5fc69f030b7ff9d13afd8d6969ea0ce4</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>operator-</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>aede00a1903e2060d6782f6061663949d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>afe97062349df5c58de441ffd8e21f910</anchor>
      <arglist>(const Mat3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a7f206087be32b28568a4a699716ee74c</anchor>
      <arglist>(const Mat3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a5d8184989655dee3a3081b2c4699e830</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a97148b60921c1f65f4e7831fa5f81c01</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classMat3f.html</anchorfile>
      <anchor>a82c25011aa02f195761be185844da0ca</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Mat4f</name>
    <filename>classMat4f.html</filename>
    <member kind="typedef">
      <type>float</type>
      <name>ElementType</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a456d55a3c02fc7e69789ff12132ef5b4</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Mat4f</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a69d609b2acdce37c26d630c4b9a4cc1c</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Mat4f</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a78feddd9d1b1560c8f1d9fffd8ee8bca</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1, const float &amp;i_element2, const float &amp;i_element3, const float &amp;i_element4, const float &amp;i_element5, const float &amp;i_element6, const float &amp;i_element7, const float &amp;i_element8, const float &amp;i_element9, const float &amp;i_element10, const float &amp;i_element11, const float &amp;i_element12, const float &amp;i_element13, const float &amp;i_element14, const float &amp;i_element15)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a5ff9436d9f2465675a6760b3855cdbea</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a4d0530bbc76089c8616cf196fc6550b6</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator()</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>abff776fc77a9779638db51a49df8093a</anchor>
      <arglist>(size_t i_row, size_t i_column) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator()</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a885349ae8b753178592f42218f06fb02</anchor>
      <arglist>(size_t i_row, size_t i_column)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator+</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a78b2288ea52edca25c40c2491472b570</anchor>
      <arglist>(const Mat4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>abaad84e91b55b29b0da6dffc8527a198</anchor>
      <arglist>(const Mat4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator-</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a6f7897c4b1c0a82edba59294a153b19d</anchor>
      <arglist>(const Mat4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a52cb9790bec1eb96a539e7e97f42d362</anchor>
      <arglist>(const Mat4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a4404ae2e98195568541ca3d94b3badc8</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator/</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a5b924dd388f40b3003e679b240c790ca</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>add01217ec6cd267d50bb01adf9bebe39</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator-</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a77cb32f23cf714606949b982595f14f1</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>abae11babbe1376666c4c7659ae86dc36</anchor>
      <arglist>(const Mat4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a1e05923b12c41f4b2813ba578d27175a</anchor>
      <arglist>(const Mat4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a4cb5855d0c6805cc08c6ceb634202a3b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Mat4f</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a69d609b2acdce37c26d630c4b9a4cc1c</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Mat4f</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a78feddd9d1b1560c8f1d9fffd8ee8bca</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1, const float &amp;i_element2, const float &amp;i_element3, const float &amp;i_element4, const float &amp;i_element5, const float &amp;i_element6, const float &amp;i_element7, const float &amp;i_element8, const float &amp;i_element9, const float &amp;i_element10, const float &amp;i_element11, const float &amp;i_element12, const float &amp;i_element13, const float &amp;i_element14, const float &amp;i_element15)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a5ff9436d9f2465675a6760b3855cdbea</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a4d0530bbc76089c8616cf196fc6550b6</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator()</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>abff776fc77a9779638db51a49df8093a</anchor>
      <arglist>(size_t i_row, size_t i_column) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator()</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a885349ae8b753178592f42218f06fb02</anchor>
      <arglist>(size_t i_row, size_t i_column)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator+</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a78b2288ea52edca25c40c2491472b570</anchor>
      <arglist>(const Mat4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>abaad84e91b55b29b0da6dffc8527a198</anchor>
      <arglist>(const Mat4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator-</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a6f7897c4b1c0a82edba59294a153b19d</anchor>
      <arglist>(const Mat4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a52cb9790bec1eb96a539e7e97f42d362</anchor>
      <arglist>(const Mat4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a4404ae2e98195568541ca3d94b3badc8</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator/</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a5b924dd388f40b3003e679b240c790ca</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>add01217ec6cd267d50bb01adf9bebe39</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>operator-</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a77cb32f23cf714606949b982595f14f1</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>abae11babbe1376666c4c7659ae86dc36</anchor>
      <arglist>(const Mat4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a1e05923b12c41f4b2813ba578d27175a</anchor>
      <arglist>(const Mat4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a4cb5855d0c6805cc08c6ceb634202a3b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>ac10de218d63920c43f8c53a4ad7f14e0</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classMat4f.html</anchorfile>
      <anchor>a1080edb5f18195fbf584b8db2e803c89</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec2f</name>
    <filename>classVec2f.html</filename>
    <member kind="typedef">
      <type>float</type>
      <name>ElementType</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>ae7b6dc0b8b3ec7ce3f7815bc83bec39b</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2f</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a1c9fee7a4c6502bacedbe27022194ec4</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2f</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>ab2afedb7241eef8e3433870f1b827727</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a37059a91411b569dbe1c162821f0015b</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a930daa8c1cf09c21b8a491d2a680c6dd</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>X</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a239c72129efe9c9d0f03cb0f25d4cd1f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Y</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>ad008f9285c7723c8c62d7f5fa461b5fc</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator+</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>aa565fe6421a39d5556c9a9f495578cfd</anchor>
      <arglist>(const Vec2f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a66a685c0480e4a1f9b87805856825da7</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator-</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a49c862e286000f5028fa3e1e3db7196d</anchor>
      <arglist>(const Vec2f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a45ec26dfc3f37192bb8f4b0e0e3044de</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a5b835ffd8c04707e8cf4d9899164bd25</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator/</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a2f2adef00256ed77a1f70869774153dc</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a0c1087ecdc2ee5b8b5267945a1d519cd</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator-</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a8c84c504fcd877689c0bdebd53799ddb</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a3486c79bb9c0a5dd9138d62cc3661f0b</anchor>
      <arglist>(const Vec2f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>aee82ab6ea8aa8d2e7f16506ab0b4dd70</anchor>
      <arglist>(const Vec2f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>acaec180a7e4b9c10829ecc40274d9dd0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2f</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a1c9fee7a4c6502bacedbe27022194ec4</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2f</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>ab2afedb7241eef8e3433870f1b827727</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a37059a91411b569dbe1c162821f0015b</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a930daa8c1cf09c21b8a491d2a680c6dd</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>X</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a239c72129efe9c9d0f03cb0f25d4cd1f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Y</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>ad008f9285c7723c8c62d7f5fa461b5fc</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator+</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>aa565fe6421a39d5556c9a9f495578cfd</anchor>
      <arglist>(const Vec2f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a66a685c0480e4a1f9b87805856825da7</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator-</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a49c862e286000f5028fa3e1e3db7196d</anchor>
      <arglist>(const Vec2f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a45ec26dfc3f37192bb8f4b0e0e3044de</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a5b835ffd8c04707e8cf4d9899164bd25</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator/</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a2f2adef00256ed77a1f70869774153dc</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a0c1087ecdc2ee5b8b5267945a1d519cd</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>operator-</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a8c84c504fcd877689c0bdebd53799ddb</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a3486c79bb9c0a5dd9138d62cc3661f0b</anchor>
      <arglist>(const Vec2f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>aee82ab6ea8aa8d2e7f16506ab0b4dd70</anchor>
      <arglist>(const Vec2f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>acaec180a7e4b9c10829ecc40274d9dd0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a7c8dd757f610aea8e948cbbc5858da7e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec2f.html</anchorfile>
      <anchor>a489584d9154dffbb9167af698093b171</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec2fRange</name>
    <filename>classVec2fRange.html</filename>
    <member kind="typedef">
      <type>Vec2f</type>
      <name>ValueType</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a085feb30c0ecdc11f3cbba71f3f360b6</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2fRange</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a0323df3d02aa252dfa5ef2c3905f7eed</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2fRange</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>aff9e916522d73499aea5034956d8f90b</anchor>
      <arglist>(const Vec2f &amp;i_min, const Vec2f &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec2f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a07076e530fd10d192c6e74f0f6c2a8aa</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a9bd2e3057484d875b038135d0b6d917a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec2f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>ac8ac709dc952cb1e02daf487e28cb61f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a12ef79fbf94043832e57a54e01d5c9b2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a193345fa4ab86233323509706912f7a8</anchor>
      <arglist>(const Vec2fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a5a8ec5e5af2ca373464d193a83a951ff</anchor>
      <arglist>(const Vec2fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a1ff0d0b87fb768b67824e2d6cddd2ae4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2fRange</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a0323df3d02aa252dfa5ef2c3905f7eed</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2fRange</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>aff9e916522d73499aea5034956d8f90b</anchor>
      <arglist>(const Vec2f &amp;i_min, const Vec2f &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec2f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a07076e530fd10d192c6e74f0f6c2a8aa</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a9bd2e3057484d875b038135d0b6d917a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec2f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>ac8ac709dc952cb1e02daf487e28cb61f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a12ef79fbf94043832e57a54e01d5c9b2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a193345fa4ab86233323509706912f7a8</anchor>
      <arglist>(const Vec2fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a5a8ec5e5af2ca373464d193a83a951ff</anchor>
      <arglist>(const Vec2fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a1ff0d0b87fb768b67824e2d6cddd2ae4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a2e234e346c914e213cae8bb68a2a8486</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec2fRange.html</anchorfile>
      <anchor>a0dcdb08d10a6ca82cdf28f725d0a2e72</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec2i</name>
    <filename>classVec2i.html</filename>
    <member kind="typedef">
      <type>int</type>
      <name>ElementType</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a1048cacbb10d55fb40241024e44b9516</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2i</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a8c235321cd02e856cd551f80065f83f7</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2i</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a72dc6210d1ce3749755569a32594b257</anchor>
      <arglist>(const int &amp;i_element0, const int &amp;i_element1)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a5d94b1bdba97ad1f73b434b33341e82d</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a1b7151cdfc1533d6f543747cf8c8ee34</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>X</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a540d739b409834f1371e7822db8173e4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Y</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a09dd65f63771b2b363f0f456f408936d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator+</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>af6880e8c9f989a3decc7408b68a278b4</anchor>
      <arglist>(const Vec2i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a1086334d27a1c2ae16388fd40c2311b8</anchor>
      <arglist>(const Vec2i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator-</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a65ced623b58c1848ffb5387fd4e80c16</anchor>
      <arglist>(const Vec2i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a1740420b160c79eb69fbc05f1738a89e</anchor>
      <arglist>(const Vec2i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a7e507333a798f77674fa8f741a3ed0ba</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator/</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a7b6370f0123e35026cb1c7ab5629beb2</anchor>
      <arglist>(const int &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a522920032cd2f6841c8cbfa4fe895705</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator-</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a597f40f78fdb9c450f7c8d65e309f156</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a9453b136b2913b2e1c955397d9c4d20f</anchor>
      <arglist>(const Vec2i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a4e53869356b7bc8876d2776b4fd03d12</anchor>
      <arglist>(const Vec2i &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a314c8642effd984713dc54bf7e7c8c95</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2i</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a8c235321cd02e856cd551f80065f83f7</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2i</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a72dc6210d1ce3749755569a32594b257</anchor>
      <arglist>(const int &amp;i_element0, const int &amp;i_element1)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a5d94b1bdba97ad1f73b434b33341e82d</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a1b7151cdfc1533d6f543747cf8c8ee34</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>X</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a540d739b409834f1371e7822db8173e4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Y</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a09dd65f63771b2b363f0f456f408936d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator+</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>af6880e8c9f989a3decc7408b68a278b4</anchor>
      <arglist>(const Vec2i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a1086334d27a1c2ae16388fd40c2311b8</anchor>
      <arglist>(const Vec2i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator-</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a65ced623b58c1848ffb5387fd4e80c16</anchor>
      <arglist>(const Vec2i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a1740420b160c79eb69fbc05f1738a89e</anchor>
      <arglist>(const Vec2i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a7e507333a798f77674fa8f741a3ed0ba</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator/</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a7b6370f0123e35026cb1c7ab5629beb2</anchor>
      <arglist>(const int &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a522920032cd2f6841c8cbfa4fe895705</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>operator-</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a597f40f78fdb9c450f7c8d65e309f156</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a9453b136b2913b2e1c955397d9c4d20f</anchor>
      <arglist>(const Vec2i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a4e53869356b7bc8876d2776b4fd03d12</anchor>
      <arglist>(const Vec2i &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a314c8642effd984713dc54bf7e7c8c95</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a03094d4b38627729e88f6c13935d582f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec2i.html</anchorfile>
      <anchor>a4338ab680b94c06328dbeca776b308cc</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec2iRange</name>
    <filename>classVec2iRange.html</filename>
    <class kind="class">Vec2iRange::iterator</class>
    <member kind="typedef">
      <type>Vec2i</type>
      <name>ValueType</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>ab221f378d70655f433ed8cfca2763aed</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2iRange</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>af0bc7ea5374057e70280870c2ff31f8d</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2iRange</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a4cb32909ebd82d98a0a46c1a2fb02bcc</anchor>
      <arglist>(const Vec2i &amp;i_min, const Vec2i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec2i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a8c9a29522f03bda95cb02fe8c327ed33</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>aa545ac7aa84420643f42be1f7098fae4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec2i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>acc21370dcd6a419aa54352eae98756c9</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a0942f5cd4a772e02a42b048b29147dbc</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>ade07384d4f08cd5f84208b006a733a19</anchor>
      <arglist>(const Vec2iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a7f3af91135298dc3638bb047ec25b25c</anchor>
      <arglist>(const Vec2iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>ab87d1beefd107e0119c47ceedc64f7d4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>begin</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a480caefd8649aa55d132af1efc39ec05</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>end</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>acfb298bc91ea68fc3960325839b34a76</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2iRange</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>af0bc7ea5374057e70280870c2ff31f8d</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec2iRange</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a4cb32909ebd82d98a0a46c1a2fb02bcc</anchor>
      <arglist>(const Vec2i &amp;i_min, const Vec2i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec2i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a8c9a29522f03bda95cb02fe8c327ed33</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>aa545ac7aa84420643f42be1f7098fae4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec2i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>acc21370dcd6a419aa54352eae98756c9</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a0942f5cd4a772e02a42b048b29147dbc</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>ade07384d4f08cd5f84208b006a733a19</anchor>
      <arglist>(const Vec2iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a7f3af91135298dc3638bb047ec25b25c</anchor>
      <arglist>(const Vec2iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>ab87d1beefd107e0119c47ceedc64f7d4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>begin</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a480caefd8649aa55d132af1efc39ec05</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>end</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>acfb298bc91ea68fc3960325839b34a76</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a3757bd29e260050ad17cc737fe522671</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec2iRange.html</anchorfile>
      <anchor>a22bde78e56174425c71662d6d5ad3d73</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec3f</name>
    <filename>classVec3f.html</filename>
    <member kind="typedef">
      <type>float</type>
      <name>ElementType</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a26e9c0f6b0a4970fbbd5366d9070ced5</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3f</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>ae716d918ce2c678c0ffefc2eb94e3a8f</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3f</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>afb7f081228e86fcb66325e30394f62c9</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1, const float &amp;i_element2)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a762608d3d6877de3276ccb9b671659a3</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>ac921c77c8c05afa8333ce3907b44db34</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>X</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>ad9c547026b0a0c194a7559a7e8827861</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Y</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a26493e2dd1c8dc96a231078dac7e2c97</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Z</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>aeb1d1eefdf2524136418e8a8070d83aa</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator+</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>ac289d5f3855941c3c09bdc13daa69b5a</anchor>
      <arglist>(const Vec3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a7c23c3fd996e2f530c3d77115212daa0</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator-</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>afe014b41812987b47497756cd72370fb</anchor>
      <arglist>(const Vec3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a74dfb2c83fac0a673e8da23d1eeda17f</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a5620ce5b2158d568ba088f93fa1735d7</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator/</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a00fe0c6fa9616f3700e5b76e219c5196</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a2169ec81e99896c64e9f96ff2445186c</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator-</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>af574e85f970ff6112fc77008b4ba1e9e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a4b3128acee0f66d75de05eb134e1642b</anchor>
      <arglist>(const Vec3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a5ec067c367e48efeb2969fd312726306</anchor>
      <arglist>(const Vec3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a1b968de8230c42a00f0bf1ce0c860832</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3f</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>ae716d918ce2c678c0ffefc2eb94e3a8f</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3f</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>afb7f081228e86fcb66325e30394f62c9</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1, const float &amp;i_element2)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a762608d3d6877de3276ccb9b671659a3</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>ac921c77c8c05afa8333ce3907b44db34</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>X</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>ad9c547026b0a0c194a7559a7e8827861</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Y</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a26493e2dd1c8dc96a231078dac7e2c97</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Z</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>aeb1d1eefdf2524136418e8a8070d83aa</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator+</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>ac289d5f3855941c3c09bdc13daa69b5a</anchor>
      <arglist>(const Vec3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a7c23c3fd996e2f530c3d77115212daa0</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator-</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>afe014b41812987b47497756cd72370fb</anchor>
      <arglist>(const Vec3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a74dfb2c83fac0a673e8da23d1eeda17f</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a5620ce5b2158d568ba088f93fa1735d7</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator/</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a00fe0c6fa9616f3700e5b76e219c5196</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a2169ec81e99896c64e9f96ff2445186c</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>operator-</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>af574e85f970ff6112fc77008b4ba1e9e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a4b3128acee0f66d75de05eb134e1642b</anchor>
      <arglist>(const Vec3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a5ec067c367e48efeb2969fd312726306</anchor>
      <arglist>(const Vec3f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a1b968de8230c42a00f0bf1ce0c860832</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>af0daeda1abe4076054abd84850722b5d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec3f.html</anchorfile>
      <anchor>a00aa73bb64a45c45132c785d201cd001</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec3fRange</name>
    <filename>classVec3fRange.html</filename>
    <member kind="typedef">
      <type>Vec3f</type>
      <name>ValueType</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>acf87a7256efddc73c2a33882eca85a9a</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3fRange</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>aaf9fa0acde8b4ad4a0d4f67452f333fb</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3fRange</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a7038672d7b6e449924fcd64e46740542</anchor>
      <arglist>(const Vec3f &amp;i_min, const Vec3f &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec3f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a3d0b731397218fa8e433f21698ece1de</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a36ce0f848c314d1253c262856f3b5000</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec3f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a7b81d60cdd8980f0cfa8eeacf71a3dc4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>ab782b06e636839a52375924ca0dd8b08</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a5dd26febc8faf9efca315b644e02c649</anchor>
      <arglist>(const Vec3fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a990803c52ff12a6340ef37fa6b106a92</anchor>
      <arglist>(const Vec3fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a396c525f672d0859d57e7c0c398bf6f6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3fRange</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>aaf9fa0acde8b4ad4a0d4f67452f333fb</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3fRange</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a7038672d7b6e449924fcd64e46740542</anchor>
      <arglist>(const Vec3f &amp;i_min, const Vec3f &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec3f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a3d0b731397218fa8e433f21698ece1de</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a36ce0f848c314d1253c262856f3b5000</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec3f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a7b81d60cdd8980f0cfa8eeacf71a3dc4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>ab782b06e636839a52375924ca0dd8b08</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a5dd26febc8faf9efca315b644e02c649</anchor>
      <arglist>(const Vec3fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a990803c52ff12a6340ef37fa6b106a92</anchor>
      <arglist>(const Vec3fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a396c525f672d0859d57e7c0c398bf6f6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a827ee6a494d089d7e6b041d80df2d84c</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec3fRange.html</anchorfile>
      <anchor>a38d952101999c677f16801b122899803</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec3i</name>
    <filename>classVec3i.html</filename>
    <member kind="typedef">
      <type>int</type>
      <name>ElementType</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a80af5103506f9e22f624be852267dd39</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3i</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>aeace6d56638cb931a7869e398adad42f</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3i</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a1906e1fa3f966e325d0d20089d648f56</anchor>
      <arglist>(const int &amp;i_element0, const int &amp;i_element1, const int &amp;i_element2)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a03601ce708882e68ce8b008f3d2c2510</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a706912e89fc10fee9ab82601a178261a</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>X</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ac2e03018fdef10c285c998dede89fdcc</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Y</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>aae0bc88226b8ca49f579a52c18dc1be8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Z</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a0efb0583e39c7588cf4bcdfa5c32d327</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator+</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>adfdfef37d60d51086dae3fb243ae8a8f</anchor>
      <arglist>(const Vec3i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a9d0d58bcfa040b9870675597ad8a3bc0</anchor>
      <arglist>(const Vec3i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator-</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a87329093c887bc990b8edd50858f66b7</anchor>
      <arglist>(const Vec3i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a671c79a14fdeb016334a607b1bc0deb9</anchor>
      <arglist>(const Vec3i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a4efd2b1c2da7c1e6bfc96c8b59884ceb</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator/</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ac82100e7ffe051684f22e8a728924e90</anchor>
      <arglist>(const int &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a5f4449560668eacbfd1a712cec51226c</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator-</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ab3d2c6cc66b9fb627dff4d200c1c176e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ad2a0dfde68829c836969333325769a70</anchor>
      <arglist>(const Vec3i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ac6f15af3e669a2bca8ffdcb7b0c86cca</anchor>
      <arglist>(const Vec3i &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>aa1aa11d8abf1358a37b140b217779f39</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3i</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>aeace6d56638cb931a7869e398adad42f</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3i</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a1906e1fa3f966e325d0d20089d648f56</anchor>
      <arglist>(const int &amp;i_element0, const int &amp;i_element1, const int &amp;i_element2)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a03601ce708882e68ce8b008f3d2c2510</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a706912e89fc10fee9ab82601a178261a</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>X</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ac2e03018fdef10c285c998dede89fdcc</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Y</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>aae0bc88226b8ca49f579a52c18dc1be8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Z</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a0efb0583e39c7588cf4bcdfa5c32d327</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator+</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>adfdfef37d60d51086dae3fb243ae8a8f</anchor>
      <arglist>(const Vec3i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a9d0d58bcfa040b9870675597ad8a3bc0</anchor>
      <arglist>(const Vec3i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator-</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a87329093c887bc990b8edd50858f66b7</anchor>
      <arglist>(const Vec3i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a671c79a14fdeb016334a607b1bc0deb9</anchor>
      <arglist>(const Vec3i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a4efd2b1c2da7c1e6bfc96c8b59884ceb</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator/</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ac82100e7ffe051684f22e8a728924e90</anchor>
      <arglist>(const int &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>a5f4449560668eacbfd1a712cec51226c</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>operator-</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ab3d2c6cc66b9fb627dff4d200c1c176e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ad2a0dfde68829c836969333325769a70</anchor>
      <arglist>(const Vec3i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>ac6f15af3e669a2bca8ffdcb7b0c86cca</anchor>
      <arglist>(const Vec3i &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>aa1aa11d8abf1358a37b140b217779f39</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>aa9012c5b72a9c66dfcdd8184f7e9a449</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec3i.html</anchorfile>
      <anchor>af261a016fa9df0f8dab63705f8f94696</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec3iRange</name>
    <filename>classVec3iRange.html</filename>
    <class kind="class">Vec3iRange::iterator</class>
    <member kind="typedef">
      <type>Vec3i</type>
      <name>ValueType</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a8f0be58e6f31a0b6f675fdf8d5aec40b</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3iRange</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a9aa5fdc75d6561b425cf31c41430bc54</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3iRange</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a753f799094760ab059f63264df593a63</anchor>
      <arglist>(const Vec3i &amp;i_min, const Vec3i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec3i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a65fada9b904690740d9ca77bd194aee8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a289c22994804989496e5a094678f5d3d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec3i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>ae8f4fc216ca7775296ab3f1f8ff60019</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a13b3b7228a6b06a1ef23865c4ecc8efe</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a72cc28d07402b6bb6ee4b486c84c553d</anchor>
      <arglist>(const Vec3iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a8040f8152df0f7ec358a34528401cb5f</anchor>
      <arglist>(const Vec3iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a46553cb3cd8192744f78d5817a6111d6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>begin</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a973b0b5b13a06cd8ebf9a2473af2e64e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>end</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>abf0ea725477f2b2c0d0e4b95fd6942f8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3iRange</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a9aa5fdc75d6561b425cf31c41430bc54</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec3iRange</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a753f799094760ab059f63264df593a63</anchor>
      <arglist>(const Vec3i &amp;i_min, const Vec3i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec3i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a65fada9b904690740d9ca77bd194aee8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a289c22994804989496e5a094678f5d3d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec3i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>ae8f4fc216ca7775296ab3f1f8ff60019</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a13b3b7228a6b06a1ef23865c4ecc8efe</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a72cc28d07402b6bb6ee4b486c84c553d</anchor>
      <arglist>(const Vec3iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a8040f8152df0f7ec358a34528401cb5f</anchor>
      <arglist>(const Vec3iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a46553cb3cd8192744f78d5817a6111d6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>begin</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a973b0b5b13a06cd8ebf9a2473af2e64e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>end</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>abf0ea725477f2b2c0d0e4b95fd6942f8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>a74e920c9331fc68e2c42b95db2cd21b1</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec3iRange.html</anchorfile>
      <anchor>afd76dc723a14bc93f460b9bba7114a33</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec4f</name>
    <filename>classVec4f.html</filename>
    <member kind="typedef">
      <type>float</type>
      <name>ElementType</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a99d57359f1e123f5854a070c571a4417</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4f</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a5a0c836226caf6deb7a6e542ce9ac8cf</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4f</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>af43a28ee0ac876443d9c8e1bd48967f4</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1, const float &amp;i_element2, const float &amp;i_element3)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a3805c19b33907778c3a5eb874cdc30de</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>af7046f1d954c626724e03752d6e88766</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>X</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a52723463e99e7220a90a983dd8daf817</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Y</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a7db1b03fee158f9bfce3d6acdeffc572</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Z</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a3133835886cfdf1758bbfb82fb5dc85f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>W</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>aae40738c0baa008c36a13307fb2780a7</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator+</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>ac54ebf6fd49fbf106398671d2bc0409f</anchor>
      <arglist>(const Vec4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a635833eb000140cd4fa8cf16a3dae4db</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator-</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a1fcf1bfad08a45e9d083bc565563e8d4</anchor>
      <arglist>(const Vec4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>af67a5f60d0e3e9852aca33ad4e3d2bfa</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a9999b848ec0b73059fb1fa1072c13aa3</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator/</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a99e37677ae5530a6736f3f17e370f5cd</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a821b79a24ca437f4f99f75b24970a10d</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator-</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a20fe5244e715393f0564b2fffd8d2180</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a2366dfd5c59b6fca810b7c35a4c46d7e</anchor>
      <arglist>(const Vec4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>aa0e234d715a8dcba22a12a790356ca2a</anchor>
      <arglist>(const Vec4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>ac181c15178df508239c3c2f5cb8b767e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4f</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a5a0c836226caf6deb7a6e542ce9ac8cf</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4f</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>af43a28ee0ac876443d9c8e1bd48967f4</anchor>
      <arglist>(const float &amp;i_element0, const float &amp;i_element1, const float &amp;i_element2, const float &amp;i_element3)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a3805c19b33907778c3a5eb874cdc30de</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const float &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>af7046f1d954c626724e03752d6e88766</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>X</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a52723463e99e7220a90a983dd8daf817</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Y</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a7db1b03fee158f9bfce3d6acdeffc572</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Z</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a3133835886cfdf1758bbfb82fb5dc85f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>W</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>aae40738c0baa008c36a13307fb2780a7</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator+</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>ac54ebf6fd49fbf106398671d2bc0409f</anchor>
      <arglist>(const Vec4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a635833eb000140cd4fa8cf16a3dae4db</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator-</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a1fcf1bfad08a45e9d083bc565563e8d4</anchor>
      <arglist>(const Vec4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>af67a5f60d0e3e9852aca33ad4e3d2bfa</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a9999b848ec0b73059fb1fa1072c13aa3</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator/</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a99e37677ae5530a6736f3f17e370f5cd</anchor>
      <arglist>(const float &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a821b79a24ca437f4f99f75b24970a10d</anchor>
      <arglist>(const float &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>operator-</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a20fe5244e715393f0564b2fffd8d2180</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a2366dfd5c59b6fca810b7c35a4c46d7e</anchor>
      <arglist>(const Vec4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>aa0e234d715a8dcba22a12a790356ca2a</anchor>
      <arglist>(const Vec4f &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>ac181c15178df508239c3c2f5cb8b767e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a1a73d320466f21200acdcdaf59b2f61e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec4f.html</anchorfile>
      <anchor>a026c3ef3963e602218d01cb5d098598b</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec4fRange</name>
    <filename>classVec4fRange.html</filename>
    <member kind="typedef">
      <type>Vec4f</type>
      <name>ValueType</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>adf4c5322f6ab8a1a2f884967e13ec829</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4fRange</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a1853a500ae5b7691c5f5b2e9acbe85a1</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4fRange</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a649f623be99493db9155d836a2309625</anchor>
      <arglist>(const Vec4f &amp;i_min, const Vec4f &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec4f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a74e388c78dab088f2c3c26126943d61f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>aa2194e781883fb9e87c8d82681755e5c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec4f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>ac33ef3e0b9eebb957ec8c7cfdd59b372</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a648a8b7f32cb751559c1c446a9d99cb9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a30b4bdfb52be2421746630e95d207b77</anchor>
      <arglist>(const Vec4fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a5116edca4e9f4bb364e35d3ba77bc3c9</anchor>
      <arglist>(const Vec4fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>aec6e6130af6c4b3e2beda14ac7b5ce59</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4fRange</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a1853a500ae5b7691c5f5b2e9acbe85a1</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4fRange</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a649f623be99493db9155d836a2309625</anchor>
      <arglist>(const Vec4f &amp;i_min, const Vec4f &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec4f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a74e388c78dab088f2c3c26126943d61f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>Min</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>aa2194e781883fb9e87c8d82681755e5c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec4f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>ac33ef3e0b9eebb957ec8c7cfdd59b372</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f &amp;</type>
      <name>Max</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a648a8b7f32cb751559c1c446a9d99cb9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a30b4bdfb52be2421746630e95d207b77</anchor>
      <arglist>(const Vec4fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a5116edca4e9f4bb364e35d3ba77bc3c9</anchor>
      <arglist>(const Vec4fRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>aec6e6130af6c4b3e2beda14ac7b5ce59</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a1dc00420c57aae68505d10732a264b9f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec4fRange.html</anchorfile>
      <anchor>a50eb2b6fcbeb4312ddfa578731d7c250</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec4i</name>
    <filename>classVec4i.html</filename>
    <member kind="typedef">
      <type>int</type>
      <name>ElementType</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a59500d7931f703515af7226b950e0a26</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4i</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ad4a304ba844ddd90d268081d1aa50ebd</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4i</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ad37fe46a9502f9c9c0d06e012af63e99</anchor>
      <arglist>(const int &amp;i_element0, const int &amp;i_element1, const int &amp;i_element2, const int &amp;i_element3)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a9ba1bb1e078b92a8946b84199d498b26</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aa9ad976cc7a06788668635771a6247ee</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>X</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a32525356e16354827c4cd8e44cadfebe</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Y</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a6ce21deb43a40988db0a797d882118b0</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Z</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aad2229ba78cde8bec91e1a7883aae5bd</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>W</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aa23eb8a9942210759d0a615a402174ee</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator+</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a67c8eabdf2ac87162336b5f5d6020bf2</anchor>
      <arglist>(const Vec4i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aa435e46c0451c2f439b8d0a0800821e2</anchor>
      <arglist>(const Vec4i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator-</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ad5885c4291b379bb9a699f3480782a54</anchor>
      <arglist>(const Vec4i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a4d59d5a0dcdc38022fed02377677a286</anchor>
      <arglist>(const Vec4i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a09b5e723a30350cde377cc5c02d08ffe</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator/</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a10ad725c009f9e6aa89375884a1585f2</anchor>
      <arglist>(const int &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>af487bb33b4b5dde11172822e4576aed9</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator-</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>af9426d8bdef9d7084a2b9f915624656b</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ae8512e618b10176fe514a2277bd85278</anchor>
      <arglist>(const Vec4i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ac7ce94546221b1dcda6fa62d06f4bab6</anchor>
      <arglist>(const Vec4i &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aedb7931a7dd0818ec40f763a1fe51c12</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4i</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ad4a304ba844ddd90d268081d1aa50ebd</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4i</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ad37fe46a9502f9c9c0d06e012af63e99</anchor>
      <arglist>(const int &amp;i_element0, const int &amp;i_element1, const int &amp;i_element2, const int &amp;i_element3)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a9ba1bb1e078b92a8946b84199d498b26</anchor>
      <arglist>(size_t i_index)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const int &amp;</type>
      <name>operator[]</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aa9ad976cc7a06788668635771a6247ee</anchor>
      <arglist>(size_t i_index) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>X</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a32525356e16354827c4cd8e44cadfebe</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Y</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a6ce21deb43a40988db0a797d882118b0</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Z</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aad2229ba78cde8bec91e1a7883aae5bd</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>W</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aa23eb8a9942210759d0a615a402174ee</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator+</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a67c8eabdf2ac87162336b5f5d6020bf2</anchor>
      <arglist>(const Vec4i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aa435e46c0451c2f439b8d0a0800821e2</anchor>
      <arglist>(const Vec4i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator-</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ad5885c4291b379bb9a699f3480782a54</anchor>
      <arglist>(const Vec4i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a4d59d5a0dcdc38022fed02377677a286</anchor>
      <arglist>(const Vec4i &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a09b5e723a30350cde377cc5c02d08ffe</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator/</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a10ad725c009f9e6aa89375884a1585f2</anchor>
      <arglist>(const int &amp;i_scalar) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>af487bb33b4b5dde11172822e4576aed9</anchor>
      <arglist>(const int &amp;i_scalar)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>operator-</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>af9426d8bdef9d7084a2b9f915624656b</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ae8512e618b10176fe514a2277bd85278</anchor>
      <arglist>(const Vec4i &amp;i_vector) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>ac7ce94546221b1dcda6fa62d06f4bab6</anchor>
      <arglist>(const Vec4i &amp;i_vector) const</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static GM_HOST_DEVICE size_t</type>
      <name>GetElementSize</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>aedb7931a7dd0818ec40f763a1fe51c12</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>adaadb881c26b884bc2c95bf0af13fb8b</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec4i.html</anchorfile>
      <anchor>a72636aabd65474df7d5bb70552f8f5e7</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Vec4iRange</name>
    <filename>classVec4iRange.html</filename>
    <class kind="class">Vec4iRange::iterator</class>
    <member kind="typedef">
      <type>Vec4i</type>
      <name>ValueType</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a7b3bb6a28e287aa0ddaf5130850f9325</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4iRange</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a8a8e5decdc1eedba6f8da863648bf734</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4iRange</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a98f1051a5209cd89c908932baea993f6</anchor>
      <arglist>(const Vec4i &amp;i_min, const Vec4i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec4i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a5b38541dfa4cf81a1880d2ea1f54d5b8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a46188f00f86302c474709c7ccff0ce86</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec4i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>ae1065d2bcd8633f5e7d5cc3829184e43</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a68268fad2c7f49e3a6517ec15c5ed645</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a41b1700095101490783d2d33fbf6b202</anchor>
      <arglist>(const Vec4iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a635f051b4db81253675324eaacd8ae58</anchor>
      <arglist>(const Vec4iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a784005396a854a93af5a6056e0381e86</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>begin</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a2e93a4cdd5b409000b893c5e2c43911f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>end</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a7caa573f777b7ad4de55725a566f79bb</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4iRange</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a8a8e5decdc1eedba6f8da863648bf734</anchor>
      <arglist>()=default</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE constexpr</type>
      <name>Vec4iRange</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a98f1051a5209cd89c908932baea993f6</anchor>
      <arglist>(const Vec4i &amp;i_min, const Vec4i &amp;i_max)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec4i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a5b38541dfa4cf81a1880d2ea1f54d5b8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>Min</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a46188f00f86302c474709c7ccff0ce86</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE const Vec4i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>ae1065d2bcd8633f5e7d5cc3829184e43</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i &amp;</type>
      <name>Max</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a68268fad2c7f49e3a6517ec15c5ed645</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator==</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a41b1700095101490783d2d33fbf6b202</anchor>
      <arglist>(const Vec4iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>operator!=</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a635f051b4db81253675324eaacd8ae58</anchor>
      <arglist>(const Vec4iRange &amp;i_range) const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsEmpty</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a784005396a854a93af5a6056e0381e86</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>begin</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a2e93a4cdd5b409000b893c5e2c43911f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>iterator</type>
      <name>end</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>a7caa573f777b7ad4de55725a566f79bb</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>HasNans</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>ae19c1a2e023cbd04d9654dd152e46916</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>GetString</name>
      <anchorfile>classVec4iRange.html</anchorfile>
      <anchor>ada2e65bd38622376ddc61505017332ac</anchor>
      <arglist>(const std::string &amp;i_classPrefix=std::string()) const</arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>GM_types</name>
    <title>Types</title>
    <filename>group__GM__types.html</filename>
    <subgroup>gm_types_vector</subgroup>
    <subgroup>gm_types_range</subgroup>
    <subgroup>gm_types_array</subgroup>
    <subgroup>gm_types_composite</subgroup>
  </compound>
  <compound kind="group">
    <name>gm_types_vector</name>
    <title>Vector types</title>
    <filename>group__gm__types__vector.html</filename>
    <file>mat3f.h</file>
    <file>mat4f.h</file>
    <file>vec2f.h</file>
    <file>vec2i.h</file>
    <file>vec3f.h</file>
    <file>vec3i.h</file>
    <file>vec4f.h</file>
    <file>vec4i.h</file>
    <class kind="class">Mat3f</class>
    <class kind="class">Mat4f</class>
    <class kind="class">Vec2f</class>
    <class kind="class">Vec2i</class>
    <class kind="class">Vec3f</class>
    <class kind="class">Vec3i</class>
    <class kind="class">Vec4f</class>
    <class kind="class">Vec4i</class>
  </compound>
  <compound kind="group">
    <name>gm_types_range</name>
    <title>Range types</title>
    <filename>group__gm__types__range.html</filename>
    <file>floatRange.h</file>
    <file>intRange.h</file>
    <file>vec2fRange.h</file>
    <file>vec2iRange.h</file>
    <file>vec3fRange.h</file>
    <file>vec3iRange.h</file>
    <file>vec4fRange.h</file>
    <file>vec4iRange.h</file>
    <class kind="class">FloatRange</class>
    <class kind="class">IntRange</class>
    <class kind="class">Vec2fRange</class>
    <class kind="class">Vec2iRange</class>
    <class kind="class">Vec3fRange</class>
    <class kind="class">Vec3iRange</class>
    <class kind="class">Vec4fRange</class>
    <class kind="class">Vec4iRange</class>
  </compound>
  <compound kind="group">
    <name>gm_types_array</name>
    <title>Array types</title>
    <filename>group__gm__types__array.html</filename>
    <file>boolArray.h</file>
    <file>floatArray.h</file>
    <file>intArray.h</file>
    <file>mat3fArray.h</file>
    <file>mat4fArray.h</file>
    <file>vec2fArray.h</file>
    <file>vec2iArray.h</file>
    <file>vec3fArray.h</file>
    <file>vec3iArray.h</file>
    <file>vec4fArray.h</file>
    <file>vec4iArray.h</file>
  </compound>
  <compound kind="group">
    <name>gm_types_composite</name>
    <title>Composite types</title>
    <filename>group__gm__types__composite.html</filename>
  </compound>
  <compound kind="group">
    <name>GM_functions</name>
    <title>Functions</title>
    <filename>group__GM__functions.html</filename>
    <subgroup>gm_functions_basic</subgroup>
    <subgroup>gm_functions_linearAlgebra</subgroup>
    <subgroup>gm_functions_rayTracing</subgroup>
  </compound>
  <compound kind="group">
    <name>gm_functions_basic</name>
    <title>Basic math operators</title>
    <filename>group__gm__functions__basic.html</filename>
    <file>abs.h</file>
    <file>bilinearInterpolation.h</file>
    <file>ceil.h</file>
    <file>clamp.h</file>
    <file>contains.h</file>
    <file>degrees.h</file>
    <file>expand.h</file>
    <file>floor.h</file>
    <file>intersection.h</file>
    <file>linearInterpolation.h</file>
    <file>linearMap.h</file>
    <file>max.h</file>
    <file>min.h</file>
    <file>quadraticRoots.h</file>
    <file>radians.h</file>
    <file>randomNumber.h</file>
    <file>trilinearInterpolation.h</file>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gad827ec71c006f0cbde5948befec32fc0</anchor>
      <arglist>(const float &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gafa1ca395966d21ae5f70faea6aec943a</anchor>
      <arglist>(const Vec2f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga078d3e3cd3da902cb2249f2566936313</anchor>
      <arglist>(const Vec3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga015c8bc1ec4a2671f970c71a970f3f38</anchor>
      <arglist>(const Vec4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga289ef924b28d093a7bfe52d47391dff1</anchor>
      <arglist>(const Mat3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Abs</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae719e12185554586385d0da374324c71</anchor>
      <arglist>(const Mat4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gacbe3775d38660c7d91030cd48b6c7c25</anchor>
      <arglist>(const float &amp;i_value00, const float &amp;i_value01, const float &amp;i_value10, const float &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gacf417c22bd05e261e59e5bc8d15708ae</anchor>
      <arglist>(const Mat3f &amp;i_value00, const Mat3f &amp;i_value01, const Mat3f &amp;i_value10, const Mat3f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga0399fac7ef2b098f07c8861b1d49a0d3</anchor>
      <arglist>(const Mat4f &amp;i_value00, const Mat4f &amp;i_value01, const Mat4f &amp;i_value10, const Mat4f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga094bd25688e2b5b89ceb62f15eb8b62b</anchor>
      <arglist>(const Vec2f &amp;i_value00, const Vec2f &amp;i_value01, const Vec2f &amp;i_value10, const Vec2f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gab7364e0e9685b265474f49a039be8c7e</anchor>
      <arglist>(const Vec3f &amp;i_value00, const Vec3f &amp;i_value01, const Vec3f &amp;i_value10, const Vec3f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>BilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gab137654c95ce45cdadb03efb85071e36</anchor>
      <arglist>(const Vec4f &amp;i_value00, const Vec4f &amp;i_value01, const Vec4f &amp;i_value10, const Vec4f &amp;i_value11, const float &amp;i_weightX, const float &amp;i_weightY)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gad8fbe5e4b3940cac4c85de58284cf08c</anchor>
      <arglist>(const float &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga269a2604345a5241ab732e23e18b9d3e</anchor>
      <arglist>(const Vec2f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae5623eaf35e1e499a0e672484449bbdb</anchor>
      <arglist>(const Vec3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaec4169eaca08f6dd95714aeaf5a88b94</anchor>
      <arglist>(const Vec4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga585e1dd448234e5be6b3dd5e3a5de4b8</anchor>
      <arglist>(const Mat3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Ceil</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga60dc12236f92d64f2009c8cf37352624</anchor>
      <arglist>(const Mat4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga5c89a065cd7ebd41c0d19ffc3002042e</anchor>
      <arglist>(const float &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga064a6c4d3494c2c951963d0468c8a9fa</anchor>
      <arglist>(const int &amp;i_value, const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga21fe6277b7df1ed38a172bae00595430</anchor>
      <arglist>(const Vec2f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf87cdc923c543b2c3eb22c30241b1411</anchor>
      <arglist>(const Vec3f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gacb2be337cb312d143496cd79e68da31b</anchor>
      <arglist>(const Vec4f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga739accba8a493aa8647d2202fa93ff10</anchor>
      <arglist>(const Vec2i &amp;i_value, const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf0d52468eb26dbc61c8b2a30a7f3cfb2</anchor>
      <arglist>(const Vec3i &amp;i_value, const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga2346a93e131bd30774d106e9a12124b1</anchor>
      <arglist>(const Vec4i &amp;i_value, const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga4daedb8da222e40d8156af73fc6f7951</anchor>
      <arglist>(const Mat3f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Clamp</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga8c764e5134bef4e42ac0c1e92af44ef4</anchor>
      <arglist>(const Mat4f &amp;i_value, const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Degrees</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae87524da220700b948d8eb94a80f8f7b</anchor>
      <arglist>(const float &amp;i_angle)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga5e31af7b97fb351a3cadf94d2538cecb</anchor>
      <arglist>(const float &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga99b6c7c86afe270bcdd49536026d8b2e</anchor>
      <arglist>(const Vec2f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf748f3cc6857f9ac830e444bca3a529c</anchor>
      <arglist>(const Vec3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga239b9168c5945bf5df987e503e8ff562</anchor>
      <arglist>(const Vec4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gac13c5744299061b948e10d00fe40bbe3</anchor>
      <arglist>(const Mat3f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Floor</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf73e888e47c977c95460b0c058b0c34a</anchor>
      <arglist>(const Mat4f &amp;i_value)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga277d2156d5ef3de29f2ba6d14e3d0bf2</anchor>
      <arglist>(const float &amp;i_source, const float &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga18cff1ac7be5e714cb3bec000a23597e</anchor>
      <arglist>(const Mat3f &amp;i_source, const Mat3f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga2a4930dc49ff92002803e09977e7ea79</anchor>
      <arglist>(const Mat4f &amp;i_source, const Mat4f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae16b73ed33599600ce0f63609ea29280</anchor>
      <arglist>(const Vec2f &amp;i_source, const Vec2f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gad488515696b51df72e6fcabf184b668e</anchor>
      <arglist>(const Vec3f &amp;i_source, const Vec3f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>LinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gab7fb01b198f2b3a97ff16317f4137f00</anchor>
      <arglist>(const Vec4f &amp;i_source, const Vec4f &amp;i_target, const float &amp;i_weight)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga5798f027478c55bade52df30921e7982</anchor>
      <arglist>(const float &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga263b14faec42590b79c9279ab3f1ad99</anchor>
      <arglist>(const Mat3f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga1eb7b9b44b3def2bcbc54ca6ec198b2b</anchor>
      <arglist>(const Mat4f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga5fcee0bde103f8a7f117a6a48c6a94c1</anchor>
      <arglist>(const Vec2f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae2b1e291707e7fcf0896da548ca64976</anchor>
      <arglist>(const Vec3f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>LinearMap</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga8128bd11dd098ac73ed334771d311fd1</anchor>
      <arglist>(const Vec4f &amp;i_sourceValue, const FloatRange &amp;i_sourceRange, const FloatRange &amp;i_targetRange)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga2a364cda3438d365813a492dc32b0e05</anchor>
      <arglist>(const float &amp;i_valueA, const float &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga3f9adcfcb5b71febd57d128a2f9fc403</anchor>
      <arglist>(const int &amp;i_valueA, const int &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gac0146a82cbe684277970b66b4d93eb95</anchor>
      <arglist>(const bool &amp;i_valueA, const bool &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gafcaaf999739ae884ea3cf09db485950a</anchor>
      <arglist>(const Vec2f &amp;i_valueA, const Vec2f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaa2c31474f80998fe6ef45b5dba2acad3</anchor>
      <arglist>(const Vec3f &amp;i_valueA, const Vec3f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga75fc404f3bda53ff0979360dbd11f913</anchor>
      <arglist>(const Vec4f &amp;i_valueA, const Vec4f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gabf288758eb7f67c2c01f981a63002b3c</anchor>
      <arglist>(const Vec2i &amp;i_valueA, const Vec2i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga34579418919333438588a6dc3cb6af84</anchor>
      <arglist>(const Vec3i &amp;i_valueA, const Vec3i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gacdf209f13f239dc9cb70c1b0daccf0ec</anchor>
      <arglist>(const Vec4i &amp;i_valueA, const Vec4i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga0436a40f59c6554a15ce898dc5cf84e5</anchor>
      <arglist>(const Mat3f &amp;i_valueA, const Mat3f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Max</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga37f840849efe9615964bc32429ca20cd</anchor>
      <arglist>(const Mat4f &amp;i_valueA, const Mat4f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaa90692ab90b72fa1054397fe67d72067</anchor>
      <arglist>(const float &amp;i_valueA, const float &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga4bc37868a32070cf03f0200f8dc828f8</anchor>
      <arglist>(const int &amp;i_valueA, const int &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga2679967ee89033f83535e432f07eb5c7</anchor>
      <arglist>(const bool &amp;i_valueA, const bool &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga6ba902a5b7fc29023994d58f6d3f2ea5</anchor>
      <arglist>(const Vec2f &amp;i_valueA, const Vec2f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga90f0be2c2a7a87feeec5b16a138cf3c3</anchor>
      <arglist>(const Vec3f &amp;i_valueA, const Vec3f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga9b4635e8a404a751dceab5210aac228f</anchor>
      <arglist>(const Vec4f &amp;i_valueA, const Vec4f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2i</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaa9417507b451fc70c931afd47bb5c0d4</anchor>
      <arglist>(const Vec2i &amp;i_valueA, const Vec2i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3i</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae984ff94dfb87cc3eaf1ae74ffe9ca39</anchor>
      <arglist>(const Vec3i &amp;i_valueA, const Vec3i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4i</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga3bd1a731ef51e958386b599f1444a10d</anchor>
      <arglist>(const Vec4i &amp;i_valueA, const Vec4i &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae2aa7be7bdd849d6b0cb46c67d23ef93</anchor>
      <arglist>(const Mat3f &amp;i_valueA, const Mat3f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Min</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga76a28039482e67f63bbe2400f7b48858</anchor>
      <arglist>(const Mat4f &amp;i_valueA, const Mat4f &amp;i_valueB)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE int</type>
      <name>QuadraticRoots</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gade1119e898f0c8fd283d3aa7a215a69d</anchor>
      <arglist>(const float &amp;i_a, const float &amp;i_b, const float &amp;i_c, Vec2f &amp;o_roots)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Radians</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga126ab9894d7a876e65510ee740f31a30</anchor>
      <arglist>(const float &amp;i_angle)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>RandomNumber</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gae1aca95f8806f8d9c854e90c5ee1e213</anchor>
      <arglist>(const FloatRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE int</type>
      <name>RandomNumber</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaaa6843bdd825058465b7c0784a73c402</anchor>
      <arglist>(const IntRange &amp;i_range)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga703a230714ee24957be6f2da5a8d97ec</anchor>
      <arglist>(const float &amp;i_value000, const float &amp;i_value001, const float &amp;i_value010, const float &amp;i_value011, const float &amp;i_value100, const float &amp;i_value101, const float &amp;i_value110, const float &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat3f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>ga358d57a0afd184096466b664330cdc6f</anchor>
      <arglist>(const Mat3f &amp;i_value000, const Mat3f &amp;i_value001, const Mat3f &amp;i_value010, const Mat3f &amp;i_value011, const Mat3f &amp;i_value100, const Mat3f &amp;i_value101, const Mat3f &amp;i_value110, const Mat3f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaed2a655f8192c2c9ba01e8781299facd</anchor>
      <arglist>(const Mat4f &amp;i_value000, const Mat4f &amp;i_value001, const Mat4f &amp;i_value010, const Mat4f &amp;i_value011, const Mat4f &amp;i_value100, const Mat4f &amp;i_value101, const Mat4f &amp;i_value110, const Mat4f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec2f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gab5c817c64bea40996a9ad04a80d2124c</anchor>
      <arglist>(const Vec2f &amp;i_value000, const Vec2f &amp;i_value001, const Vec2f &amp;i_value010, const Vec2f &amp;i_value011, const Vec2f &amp;i_value100, const Vec2f &amp;i_value101, const Vec2f &amp;i_value110, const Vec2f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf34a3e36b8246f7ae898c55a4ecf3389</anchor>
      <arglist>(const Vec3f &amp;i_value000, const Vec3f &amp;i_value001, const Vec3f &amp;i_value010, const Vec3f &amp;i_value011, const Vec3f &amp;i_value100, const Vec3f &amp;i_value101, const Vec3f &amp;i_value110, const Vec3f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>TrilinearInterpolation</name>
      <anchorfile>group__gm__functions__basic.html</anchorfile>
      <anchor>gaf9244a8f16943e49287a57299bd57374</anchor>
      <arglist>(const Vec4f &amp;i_value000, const Vec4f &amp;i_value001, const Vec4f &amp;i_value010, const Vec4f &amp;i_value011, const Vec4f &amp;i_value100, const Vec4f &amp;i_value101, const Vec4f &amp;i_value110, const Vec4f &amp;i_value111, const float &amp;i_weightX, const float &amp;i_weightY, const float &amp;i_weightZ)</arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>gm_functions_linearAlgebra</name>
    <title>Linear algebra operators</title>
    <filename>group__gm__functions__linearAlgebra.html</filename>
    <file>crossProduct.h</file>
    <file>distance.h</file>
    <file>dotProduct.h</file>
    <file>isIdentity.h</file>
    <file>length.h</file>
    <file>lengthSquared.h</file>
    <file>matrixProduct.h</file>
    <file>normalize.h</file>
    <file>setIdentity.h</file>
    <file>setScale.h</file>
    <file>setTranslate.h</file>
    <file>transpose.h</file>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Vec3f</type>
      <name>CrossProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga605cfdddf338ebc702bcbad54a5d7870</anchor>
      <arglist>(const Vec3f &amp;i_lhs, const Vec3f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Distance</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gaee62d995896999c4a6cd97015a30579d</anchor>
      <arglist>(const Vec2f &amp;i_pointA, const Vec2f &amp;i_pointB)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Distance</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gae995ad3d66c992b9ef5a7f779d831642</anchor>
      <arglist>(const Vec3f &amp;i_pointA, const Vec3f &amp;i_pointB)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>DotProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga9077d7e36a0a6c80e6fea49ecf1b2e15</anchor>
      <arglist>(const Vec2f &amp;i_lhs, const Vec2f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>DotProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga1743d134c1ba7dbdf321e1f1bfe9c72c</anchor>
      <arglist>(const Vec3f &amp;i_lhs, const Vec3f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>DotProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga0996a12b60dccd8106518fd459d13cca</anchor>
      <arglist>(const Vec4f &amp;i_lhs, const Vec4f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE bool</type>
      <name>IsIdentity</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga69dd4d7fc109962bc368b59e2c6c3463</anchor>
      <arglist>(const Mat3f &amp;i_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE bool</type>
      <name>IsIdentity</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gae9bf065d1c3574f7f13f787581fbb327</anchor>
      <arglist>(const Mat4f &amp;i_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>Length</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gae825111f1aec288c58b7f591e5f28550</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Length</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gaf4665ed9ce458687b4f37b51c4078e7b</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>Length</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gae514c75c328a3b108c318edbe88b8a05</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE float</type>
      <name>LengthSquared</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga3ac710c8671238bedf0874b8872ec9c8</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>LengthSquared</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gad6acf90cacc7350af1049a0d7986ad0e</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE float</type>
      <name>LengthSquared</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga6f89cbf4ef1dbea9c41f55d603adb910</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Mat3f</type>
      <name>MatrixProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gaaac175d07d5d746b0026abf1e0ee7ff5</anchor>
      <arglist>(const Mat3f &amp;i_lhs, const Mat3f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>MatrixProduct</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga0f6997f60fdf86b7c30b63ebea631dca</anchor>
      <arglist>(const Mat4f &amp;i_lhs, const Mat4f &amp;i_rhs)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Vec2f</type>
      <name>Normalize</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga244920ba03e49ea95897a37bb2a343aa</anchor>
      <arglist>(const Vec2f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>Normalize</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga1b576339cd0f19ee2470c0199bee2f26</anchor>
      <arglist>(const Vec3f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec4f</type>
      <name>Normalize</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga2542196162e259d4a3af7428f928c3dc</anchor>
      <arglist>(const Vec4f &amp;i_vector)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE void</type>
      <name>SetIdentity</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga624e672e84b35e2e58504e9c9ca83567</anchor>
      <arglist>(Mat3f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE void</type>
      <name>SetIdentity</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga60f6071b88a0c4dd92133901a7d640f6</anchor>
      <arglist>(Mat4f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE void</type>
      <name>SetScale</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga5dae65aada891685f50d2d15eb2aa2ce</anchor>
      <arglist>(const Vec2f &amp;i_vector, Mat3f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE void</type>
      <name>SetScale</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gaa33e6fc7dc2f7e2a30bbb04ef24763fa</anchor>
      <arglist>(const Vec3f &amp;i_vector, Mat4f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE void</type>
      <name>SetTranslate</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gac4bfbcbe26d914f674c4e001d71f880d</anchor>
      <arglist>(const Vec2f &amp;i_vector, Mat3f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE void</type>
      <name>SetTranslate</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gac05924df74e9de3ecbcfe319524ebd68</anchor>
      <arglist>(const Vec3f &amp;i_vector, Mat4f &amp;o_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Mat3f</type>
      <name>Transpose</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>ga462f9178bf3925bfa5036b340ce2faf0</anchor>
      <arglist>(const Mat3f &amp;i_matrix)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Mat4f</type>
      <name>Transpose</name>
      <anchorfile>group__gm__functions__linearAlgebra.html</anchorfile>
      <anchor>gad55b59e446f98ba38970449b3e354421</anchor>
      <arglist>(const Mat4f &amp;i_matrix)</arglist>
    </member>
  </compound>
  <compound kind="group">
    <name>gm_functions_rayTracing</name>
    <title>Ray tracing operators</title>
    <filename>group__gm__functions__rayTracing.html</filename>
    <file>rayAABBIntersection.h</file>
    <file>rayPosition.h</file>
    <file>raySphereIntersection.h</file>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE Vec2f</type>
      <name>RayPosition</name>
      <anchorfile>group__gm__functions__rayTracing.html</anchorfile>
      <anchor>gaab09e1c444961ebfd12582b9caa0df4f</anchor>
      <arglist>(const Vec2f &amp;i_origin, const Vec2f &amp;i_direction, const float &amp;i_magnitude)</arglist>
    </member>
    <member kind="function">
      <type>GM_HOST_DEVICE Vec3f</type>
      <name>RayPosition</name>
      <anchorfile>group__gm__functions__rayTracing.html</anchorfile>
      <anchor>gaf4098439683fd8ee6134439c1e37486b</anchor>
      <arglist>(const Vec3f &amp;i_origin, const Vec3f &amp;i_direction, const float &amp;i_magnitude)</arglist>
    </member>
    <member kind="function">
      <type>GM_NS_OPEN GM_HOST_DEVICE int</type>
      <name>RaySphereIntersection</name>
      <anchorfile>group__gm__functions__rayTracing.html</anchorfile>
      <anchor>gaa14388e5cbb2f41e4efb04b01c77b1b6</anchor>
      <arglist>(const Vec3f &amp;i_sphereOrigin, const float &amp;i_sphereRadius, const Vec3f &amp;i_rayOrigin, const Vec3f &amp;i_rayDirection, FloatRange &amp;o_intersections)</arglist>
    </member>
  </compound>
  <compound kind="page">
    <name>index</name>
    <title>GraphicsMath</title>
    <filename>index</filename>
    <docanchor file="index" title="Introduction">GM_section_introduction</docanchor>
    <docanchor file="index" title="Library usage">GM_section_usage</docanchor>
    <docanchor file="index" title="Building">GM_section_building</docanchor>
    <docanchor file="index" title="Building Python Bindings">GM_section_building_pythonBindings</docanchor>
    <docanchor file="index" title="Including in CUDA Device Code">GM_section_building_cudaDeviceCode</docanchor>
    <docanchor file="index" title="Developer Notes">GM_section_developerNotes</docanchor>
    <docanchor file="index" title="Source Tree">GM_section_developerNotes_sourceTree</docanchor>
    <docanchor file="index" title="Code Generation">GM_section_developerNotes_codeGeneration</docanchor>
    <docanchor file="index" title="Motivation">GM_section_developerNotes_motivation</docanchor>
    <docanchor file="index" title="GitHub Repository">GM_section_github</docanchor>
  </compound>
</tagfile>
