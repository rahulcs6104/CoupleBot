#ifndef MQTT_HANDLER_H
#define MQTT_HANDLER_H

#include <PubSubClient.h>

extern PubSubClient mqtt;

void sendMessage(const char* type) {
  String msg = "{\"type\":\"";
  msg += type;
  msg += "\"}";
  mqtt.publish(TOPIC_SEND, msg.c_str());
}

#endif
