//
//  TVOnCommand.hpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/16/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#ifndef TVOnCommand_hpp
#define TVOnCommand_hpp

#include "Command.hpp"

#include "TV.hpp"

class TVOnCommand: public Command {
public:
    TVOnCommand(const std::shared_ptr<TV>& tv);
    
    void execute() override;
    
    void undo() override;
    
private:
    std::shared_ptr<TV> tv;
};

#endif /* TVOnCommand_hpp */
