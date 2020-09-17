// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.protoex.fbe

// Fast Binary Encoding protoex JSON engine
object Json
{
    // Get the JSON engine
    val engine: com.google.gson.Gson = register(com.google.gson.GsonBuilder()).create()

    @Suppress("MemberVisibilityCanBePrivate")
    fun register(builder: com.google.gson.GsonBuilder): com.google.gson.GsonBuilder
    {
        com.chronoxor.fbe.Json.register(builder)
        com.chronoxor.proto.fbe.Json.register(builder)
        builder.registerTypeAdapter(com.chronoxor.protoex.OrderSide::class.java, OrderSideJson())
        builder.registerTypeAdapter(com.chronoxor.protoex.OrderType::class.java, OrderTypeJson())
        builder.registerTypeAdapter(com.chronoxor.protoex.StateEx::class.java, StateExJson())
        return builder
    }
}