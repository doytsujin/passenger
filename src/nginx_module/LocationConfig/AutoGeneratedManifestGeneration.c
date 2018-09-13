/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2010-2017 Phusion Holding B.V.
 *
 *  "Passenger", "Phusion Passenger" and "Union Station" are registered
 *  trademarks of Phusion Holding B.V.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

/*
 * LocationConfig/AutoGeneratedManifestGeneration.c is automatically generated from
 * LocationConfig/AutoGeneratedManifestGeneration.c.cxxcodebuilder,
 * using definitions from src/ruby_supportlib/phusion_passenger/nginx/config_options.rb.
 * Edits to LocationConfig/AutoGeneratedManifestGeneration.c will be lost.
 *
 * To update LocationConfig/AutoGeneratedManifestGeneration.c:
 *   rake nginx
 *
 * To force regeneration of LocationConfig/AutoGeneratedManifestGeneration.c:
 *   rm -f src/nginx_module/LocationConfig/AutoGeneratedManifestGeneration.c
 *   rake src/nginx_module/LocationConfig/AutoGeneratedManifestGeneration.c
 */

#include "../ConfigGeneral/ManifestGeneration.h"

static void
generate_config_manifest_for_autogenerated_loc_conf(manifest_gen_ctx_t *ctx, passenger_loc_conf_t *plcf, ngx_http_core_srv_conf_t *cscf, ngx_http_core_loc_conf_t *clcf) {
    PsgJsonValue *app_options_container = NULL;
    PsgJsonValue *loc_options_container = NULL;
    PsgJsonValue *option_container, *hierarchy_member;

    if (plcf->autogenerated.ruby_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_ruby",
            sizeof("passenger_ruby") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.ruby_source_file,
            plcf->autogenerated.ruby_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.ruby.data,
            plcf->autogenerated.ruby.len);
    }
    if (plcf->autogenerated.python_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_python",
            sizeof("passenger_python") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.python_source_file,
            plcf->autogenerated.python_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.python.data,
            plcf->autogenerated.python.len);
    }
    if (plcf->autogenerated.nodejs_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_nodejs",
            sizeof("passenger_nodejs") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.nodejs_source_file,
            plcf->autogenerated.nodejs_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.nodejs.data,
            plcf->autogenerated.nodejs.len);
    }
    if (plcf->autogenerated.meteor_app_settings_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_meteor_app_settings",
            sizeof("passenger_meteor_app_settings") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.meteor_app_settings_source_file,
            plcf->autogenerated.meteor_app_settings_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.meteor_app_settings.data,
            plcf->autogenerated.meteor_app_settings.len);
    }
    if (plcf->autogenerated.environment_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_app_env",
            sizeof("passenger_app_env") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.environment_source_file,
            plcf->autogenerated.environment_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.environment.data,
            plcf->autogenerated.environment.len);
    }
    if (plcf->autogenerated.friendly_error_pages_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_friendly_error_pages",
            sizeof("passenger_friendly_error_pages") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.friendly_error_pages_source_file,
            plcf->autogenerated.friendly_error_pages_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->autogenerated.friendly_error_pages);
    }
    if (plcf->autogenerated.min_instances_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_min_instances",
            sizeof("passenger_min_instances") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.min_instances_source_file,
            plcf->autogenerated.min_instances_source_line);
        psg_json_value_set_uint(hierarchy_member, "value",
            plcf->autogenerated.min_instances);
    }
    if (plcf->autogenerated.start_timeout_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_start_timeout",
            sizeof("passenger_start_timeout") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.start_timeout_source_file,
            plcf->autogenerated.start_timeout_source_line);
        psg_json_value_set_uint(hierarchy_member, "value",
            plcf->autogenerated.start_timeout);
    }
    if (plcf->autogenerated.user_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_user",
            sizeof("passenger_user") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.user_source_file,
            plcf->autogenerated.user_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.user.data,
            plcf->autogenerated.user.len);
    }
    if (plcf->autogenerated.group_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_group",
            sizeof("passenger_group") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.group_source_file,
            plcf->autogenerated.group_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.group.data,
            plcf->autogenerated.group.len);
    }
    if (plcf->autogenerated.app_group_name_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_app_group_name",
            sizeof("passenger_app_group_name") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.app_group_name_source_file,
            plcf->autogenerated.app_group_name_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.app_group_name.data,
            plcf->autogenerated.app_group_name.len);
    }
    if (plcf->autogenerated.monitor_log_file_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_monitor_log_file",
            sizeof("passenger_monitor_log_file") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.monitor_log_file_source_file,
            plcf->autogenerated.monitor_log_file_source_line);
        psg_json_value_set_str_array(hierarchy_member, "value",
            plcf->autogenerated.monitor_log_file);
    }
    if (plcf->autogenerated.app_root_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_app_root",
            sizeof("passenger_app_root") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.app_root_source_file,
            plcf->autogenerated.app_root_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.app_root.data,
            plcf->autogenerated.app_root.len);
    }
    if (plcf->autogenerated.app_rights_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_app_rights",
            sizeof("passenger_app_rights") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.app_rights_source_file,
            plcf->autogenerated.app_rights_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.app_rights.data,
            plcf->autogenerated.app_rights.len);
    }
    if (plcf->autogenerated.debugger_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_debugger",
            sizeof("passenger_debugger") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.debugger_source_file,
            plcf->autogenerated.debugger_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->autogenerated.debugger);
    }
    if (plcf->autogenerated.max_preloader_idle_time_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_max_preloader_idle_time",
            sizeof("passenger_max_preloader_idle_time") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.max_preloader_idle_time_source_file,
            plcf->autogenerated.max_preloader_idle_time_source_line);
        psg_json_value_set_int(hierarchy_member, "value",
            plcf->autogenerated.max_preloader_idle_time);
    }
    if (plcf->autogenerated.env_vars_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_env_var",
            sizeof("passenger_env_var") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.env_vars_source_file,
            plcf->autogenerated.env_vars_source_line);
        psg_json_value_set_str_keyval(hierarchy_member, "value",
            plcf->autogenerated.env_vars);
    }
    if (plcf->autogenerated.spawn_method_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_spawn_method",
            sizeof("passenger_spawn_method") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.spawn_method_source_file,
            plcf->autogenerated.spawn_method_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.spawn_method.data,
            plcf->autogenerated.spawn_method.len);
    }
    if (plcf->autogenerated.load_shell_envvars_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_load_shell_envvars",
            sizeof("passenger_load_shell_envvars") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.load_shell_envvars_source_file,
            plcf->autogenerated.load_shell_envvars_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->autogenerated.load_shell_envvars);
    }
    if (plcf->autogenerated.max_request_queue_size_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_max_request_queue_size",
            sizeof("passenger_max_request_queue_size") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.max_request_queue_size_source_file,
            plcf->autogenerated.max_request_queue_size_source_line);
        psg_json_value_set_uint(hierarchy_member, "value",
            plcf->autogenerated.max_request_queue_size);
    }
    if (plcf->autogenerated.app_type_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_app_type",
            sizeof("passenger_app_type") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.app_type_source_file,
            plcf->autogenerated.app_type_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.app_type.data,
            plcf->autogenerated.app_type.len);
    }
    if (plcf->autogenerated.startup_file_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_startup_file",
            sizeof("passenger_startup_file") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.startup_file_source_file,
            plcf->autogenerated.startup_file_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.startup_file.data,
            plcf->autogenerated.startup_file.len);
    }
    if (plcf->autogenerated.app_start_command_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_app_start_command",
            sizeof("passenger_app_start_command") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.app_start_command_source_file,
            plcf->autogenerated.app_start_command_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.app_start_command.data,
            plcf->autogenerated.app_start_command.len);
    }
    if (plcf->autogenerated.restart_dir_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_restart_dir",
            sizeof("passenger_restart_dir") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.restart_dir_source_file,
            plcf->autogenerated.restart_dir_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.restart_dir.data,
            plcf->autogenerated.restart_dir.len);
    }
    if (plcf->autogenerated.abort_websockets_on_process_shutdown_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_abort_websockets_on_process_shutdown",
            sizeof("passenger_abort_websockets_on_process_shutdown") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.abort_websockets_on_process_shutdown_source_file,
            plcf->autogenerated.abort_websockets_on_process_shutdown_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->autogenerated.abort_websockets_on_process_shutdown);
    }
    if (plcf->autogenerated.force_max_concurrent_requests_per_process_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_force_max_concurrent_requests_per_process",
            sizeof("passenger_force_max_concurrent_requests_per_process") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.force_max_concurrent_requests_per_process_source_file,
            plcf->autogenerated.force_max_concurrent_requests_per_process_source_line);
        psg_json_value_set_int(hierarchy_member, "value",
            plcf->autogenerated.force_max_concurrent_requests_per_process);
    }
    if (plcf->autogenerated.enabled_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_enabled",
            sizeof("passenger_enabled") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.enabled_source_file,
            plcf->autogenerated.enabled_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->autogenerated.enabled);
    }
    if (plcf->autogenerated.max_requests_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_max_requests",
            sizeof("passenger_max_requests") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.max_requests_source_file,
            plcf->autogenerated.max_requests_source_line);
        psg_json_value_set_uint(hierarchy_member, "value",
            plcf->autogenerated.max_requests);
    }
    if (plcf->autogenerated.base_uris_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_base_uri",
            sizeof("passenger_base_uri") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.base_uris_source_file,
            plcf->autogenerated.base_uris_source_line);
        psg_json_value_set_str_array(hierarchy_member, "value",
            plcf->autogenerated.base_uris);
    }
    if (plcf->autogenerated.document_root_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_document_root",
            sizeof("passenger_document_root") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.document_root_source_file,
            plcf->autogenerated.document_root_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.document_root.data,
            plcf->autogenerated.document_root.len);
    }
    if (plcf->autogenerated.headers_source_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_set_header",
            sizeof("passenger_set_header") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.headers_source_source_file,
            plcf->autogenerated.headers_source_source_line);
        psg_json_value_set_str_keyval(hierarchy_member, "value",
            plcf->autogenerated.headers_source);
    }
    if (plcf->autogenerated.upstream_config_pass_headers_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_pass_header",
            sizeof("passenger_pass_header") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.upstream_config_pass_headers_source_file,
            plcf->autogenerated.upstream_config_pass_headers_source_line);
        psg_json_value_set_str_array(hierarchy_member, "value",
            plcf->upstream_config.pass_headers);
    }
    if (plcf->autogenerated.headers_hash_max_size_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_headers_hash_max_size",
            sizeof("passenger_headers_hash_max_size") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.headers_hash_max_size_source_file,
            plcf->autogenerated.headers_hash_max_size_source_line);
        psg_json_value_set_uint(hierarchy_member, "value",
            plcf->autogenerated.headers_hash_max_size);
    }
    if (plcf->autogenerated.headers_hash_bucket_size_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_headers_hash_bucket_size",
            sizeof("passenger_headers_hash_bucket_size") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.headers_hash_bucket_size_source_file,
            plcf->autogenerated.headers_hash_bucket_size_source_line);
        psg_json_value_set_uint(hierarchy_member, "value",
            plcf->autogenerated.headers_hash_bucket_size);
    }
    if (plcf->autogenerated.upstream_config_ignore_client_abort_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_ignore_client_abort",
            sizeof("passenger_ignore_client_abort") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.upstream_config_ignore_client_abort_source_file,
            plcf->autogenerated.upstream_config_ignore_client_abort_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->upstream_config.ignore_client_abort);
    }
    if (plcf->autogenerated.upstream_config_read_timeout_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_read_timeout",
            sizeof("passenger_read_timeout") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.upstream_config_read_timeout_source_file,
            plcf->autogenerated.upstream_config_read_timeout_source_line);
        psg_json_value_set_uint(hierarchy_member, "value",
            plcf->upstream_config.read_timeout);
    }
    if (plcf->autogenerated.upstream_config_buffering_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_buffer_response",
            sizeof("passenger_buffer_response") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.upstream_config_buffering_source_file,
            plcf->autogenerated.upstream_config_buffering_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->upstream_config.buffering);
    }
    if (plcf->autogenerated.upstream_config_intercept_errors_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_intercept_errors",
            sizeof("passenger_intercept_errors") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.upstream_config_intercept_errors_source_file,
            plcf->autogenerated.upstream_config_intercept_errors_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->upstream_config.intercept_errors);
    }
    if (plcf->autogenerated.request_queue_overflow_status_code_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_request_queue_overflow_status_code",
            sizeof("passenger_request_queue_overflow_status_code") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.request_queue_overflow_status_code_source_file,
            plcf->autogenerated.request_queue_overflow_status_code_source_line);
        psg_json_value_set_int(hierarchy_member, "value",
            plcf->autogenerated.request_queue_overflow_status_code);
    }
    if (plcf->autogenerated.sticky_sessions_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_sticky_sessions",
            sizeof("passenger_sticky_sessions") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.sticky_sessions_source_file,
            plcf->autogenerated.sticky_sessions_source_line);
        psg_json_value_set_bool(hierarchy_member, "value",
            plcf->autogenerated.sticky_sessions);
    }
    if (plcf->autogenerated.sticky_sessions_cookie_name_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_sticky_sessions_cookie_name",
            sizeof("passenger_sticky_sessions_cookie_name") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.sticky_sessions_cookie_name_source_file,
            plcf->autogenerated.sticky_sessions_cookie_name_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.sticky_sessions_cookie_name.data,
            plcf->autogenerated.sticky_sessions_cookie_name.len);
    }
    if (plcf->autogenerated.vary_turbocache_by_cookie_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            loc_options_container,
            "passenger_vary_turbocache_by_cookie",
            sizeof("passenger_vary_turbocache_by_cookie") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.vary_turbocache_by_cookie_source_file,
            plcf->autogenerated.vary_turbocache_by_cookie_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.vary_turbocache_by_cookie.data,
            plcf->autogenerated.vary_turbocache_by_cookie.len);
    }
    if (plcf->autogenerated.app_log_file_explicitly_set) {
        find_or_create_manifest_app_and_loc_options_containers(ctx,
            plcf, cscf, clcf, &app_options_container, &loc_options_container);
        option_container = find_or_create_manifest_option_container(ctx,
            app_options_container,
            "passenger_app_log_file",
            sizeof("passenger_app_log_file") - 1);
        hierarchy_member = add_manifest_option_container_hierarchy_member(option_container,
            &plcf->autogenerated.app_log_file_source_file,
            plcf->autogenerated.app_log_file_source_line);
        psg_json_value_set_str(hierarchy_member, "value",
            (const char *) plcf->autogenerated.app_log_file.data,
            plcf->autogenerated.app_log_file.len);
    }

    /*
     * No autogenerated code for:
     * passenger_ignore_headers
     * passenger_buffer_size
     * passenger_buffers
     * passenger_busy_buffers_size
     */
}

