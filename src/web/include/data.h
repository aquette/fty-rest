#include <czmq.h>
#include <string>

#include "asset_msg.h"

class asset_manager {
    public:
        asset_msg_t* get_item(std::string type, std::string id);
        asset_msg_t* get_items(std::string type);
};
