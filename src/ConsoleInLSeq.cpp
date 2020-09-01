// -*- C++ -*-
/*!
 * @file  ConsoleInLSeq.cpp
 * @brief Console In Component (TimedLongSeq)
 * @date $Date$
 *
 * $Id$
 */

#include "ConsoleInLSeq.h"

// Module specification
// <rtc-template block="module_spec">
static const char* consoleinlseq_spec[] =
  {
    "implementation_id", "ConsoleInLSeq",
    "type_name",         "ConsoleInLSeq",
    "description",       "Console In Component (TimedLongSeq)",
    "version",           "1.0.0",
    "vendor",            "kanamura",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
ConsoleInLSeq::ConsoleInLSeq(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_outOut("out", m_out)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
ConsoleInLSeq::~ConsoleInLSeq()
{
}



RTC::ReturnCode_t ConsoleInLSeq::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  addOutPort("out", m_outOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t ConsoleInLSeq::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleInLSeq::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleInLSeq::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t ConsoleInLSeq::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t ConsoleInLSeq::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t ConsoleInLSeq::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t ConsoleInLSeq::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleInLSeq::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleInLSeq::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleInLSeq::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleInLSeq::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void ConsoleInLSeqInit(RTC::Manager* manager)
  {
    coil::Properties profile(consoleinlseq_spec);
    manager->registerFactory(profile,
                             RTC::Create<ConsoleInLSeq>,
                             RTC::Delete<ConsoleInLSeq>);
  }
  
};


