/**
 * THIS FILE IS GENERATED BY jsonrpcstub, DO NOT CHANGE IT!!!!!
 */

#ifndef _ABSTRACTRPCSTUBSERVER_H_
#define _ABSTRACTRPCSTUBSERVER_H_

#include <jsonrpc/rpc.h>

class AbstractRPCStubServer : public jsonrpc::AbstractServer<AbstractRPCStubServer>
{
    public:
        AbstractRPCStubServer(jsonrpc::AbstractServerConnector* conn) :
            jsonrpc::AbstractServer<AbstractRPCStubServer>(conn) 
        {
            this->bindAndAddMethod(new jsonrpc::Procedure("ShowMessage", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING, "friendlyName",jsonrpc::JSON_STRING,"msg",jsonrpc::JSON_STRING,"x",jsonrpc::JSON_INTEGER,"y",jsonrpc::JSON_INTEGER, NULL), &AbstractRPCStubServer::ShowMessageI);

        }
        
        inline virtual void ShowMessageI(const Json::Value& request, Json::Value& response) 
        {
            response = this->ShowMessage(request["friendlyName"].asString(), request["msg"].asString(), request["x"].asInt(), request["y"].asInt());
        }


        virtual std::string ShowMessage(const std::string& friendlyName, const std::string& msg, const int& x, const int& y) = 0;

};
#endif //_ABSTRACTRPCSTUBSERVER_H_
