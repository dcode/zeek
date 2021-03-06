// See the file  in the main distribution directory for copyright.


#include "plugin/Plugin.h"

#include "analyzer/protocol/udp/UDP.h"

namespace plugin {
namespace Zeek_UDP {

class Plugin : public plugin::Plugin {
public:
	plugin::Configuration Configure()
		{
		AddComponent(new ::analyzer::Component("UDP", ::analyzer::udp::UDP_Analyzer::Instantiate));

		plugin::Configuration config;
		config.name = "Zeek::UDP";
		config.description = "UDP Analyzer";
		return config;
		}
} plugin;

}
}
