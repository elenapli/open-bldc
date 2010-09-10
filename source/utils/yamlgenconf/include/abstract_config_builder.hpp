#ifndef ABSTRACT_CONFIG_BUILDER_HPP__
#define ABSTRACT_CONFIG_BUILDER_HPP__

#include "interpreter.hpp"
#include "abstract_config_runner.hpp"
#include "exception/generator_exception.hpp"
#include "exception/runner_exception.hpp"


class AbstractConfigBuilder
{ 

public: 
	virtual ~AbstractConfigBuilder() { } 

	virtual void parse(Interpreter const & interpreter) throw (GeneratorException) = 0; 
	virtual void run(AbstractConfigRunner & runner) throw (RunnerException) { 
		runner.run(this); 
	}

};

#endif /* ABSTRACT_CONFIG_BUILDER_HPP__ */