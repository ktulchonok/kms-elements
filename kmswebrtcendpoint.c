#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gst/gst.h>

#include "kmswebrtcendpoint.h"

#define PLUGIN_NAME "webrtcendpoint"

#define GST_CAT_DEFAULT kms_webrtc_end_point_debug_category
GST_DEBUG_CATEGORY_STATIC (GST_CAT_DEFAULT);

/* class initialization */

G_DEFINE_TYPE_WITH_CODE (KmsWebrtcEndPoint, kms_webrtc_end_point,
    KMS_TYPE_WEBRTC_END_POINT,
    GST_DEBUG_CATEGORY_INIT (GST_CAT_DEFAULT, PLUGIN_NAME,
        0, "debug category for webrtcendpoint element"));

static void
kms_webrtc_end_point_class_init (KmsWebrtcEndPointClass * klass)
{

  gst_element_class_set_static_metadata (GST_ELEMENT_CLASS (klass),
      "WebrtcEndPoint", "", "Kurento plugin webrtc end point",
      "Joaquin Mengual Garcia <kini.mengual@gmail.com>");
}

gboolean
kms_webrtc_end_point_plugin_init (GstPlugin * plugin)
{
  return gst_element_register (plugin, PLUGIN_NAME, GST_RANK_NONE,
      KMS_TYPE_WEBRTC_END_POINT);
}

static void
kms_webrtc_end_point_init (KmsWebrtcEndPoint * element)
{
}
